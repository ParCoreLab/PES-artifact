#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/sysinfo.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdint.h>
#include <sys/syscall.h>
#include <omp.h>

#include <time.h>
#define SIZE 32000

//#include "ibs-uapi.h"
//#include "ibs_monitor.h"
#include "cpu_check.h"

//#define REG_CURRENT_PROCESS 101

#define SIGNEW 44
#define SET_BUFFER_SIZE 0xEU
#define BUFFER_SIZE_B   (1 << 20)
#define SET_MAX_CNT     0x6U
#define OP_MAX_CNT  0x4000
#define IBS_ENABLE      0x0U
#define IBS_DISABLE     0x1U
#define RESET_BUFFER    0x10U
#define GET_LOST        0xEEU

#define REG_CURRENT_PROCESS _IOW('a', 'a', int32_t*)
#define ASSIGN_FD 102
#define GET_SAMPLE_COUNT 103
#define GET_SIGNAL_COUNT 104
#define GET_FETCH_SAMPLE_COUNT 105

int n_op_samples[1024];
int n_lost_op_samples[1024];

int8_t write_buf[1024];
int8_t read_buf[1024];

int fetch_cnt_max_to_set = 0;
int buffer_size = 0;
char *global_buffer[1024] = {NULL};

int arr[100000];
int global_var;
int global_arr[2];

int thread_count = 0;
__thread int my_id = -1;
int interrupt_count = 0;

typedef union {
    uint64_t val;
    struct {
        uint16_t ibs_fetch_max_cnt;
        uint16_t ibs_fetch_cnt;
        uint16_t ibs_fetch_lat;
        uint8_t ibs_fetch_en        : 1;
        uint8_t ibs_fetch_val       : 1;
        uint8_t ibs_fetch_comp      : 1;
        uint8_t ibs_ic_miss         : 1;
        uint8_t ibs_phy_addr_valid  : 1;
        uint8_t ibs_l1_tlb_pg_sz    : 2;
        uint8_t ibs_l1_tlb_miss     : 1;
        uint8_t ibs_l2_tlb_miss     : 1;
        uint8_t ibs_rand_en         : 1;
        uint8_t ibs_fetch_l2_miss   : 1; /* CZ+ */
        uint8_t reserved            : 5;
    } reg;
} ibs_fetch_ctl_t;

typedef union {
    uint64_t val;
    struct {
        uint64_t ibs_fetch_phy_addr : 48;
        uint64_t reserved           : 16;
    } reg;
} ibs_fetch_phys_addr;

typedef union {
    uint64_t val;
    struct {
        uint16_t ibs_itlb_refill_lat;
        uint64_t reserved               : 48;
    } reg;
} ibs_fetch_extd_ctl; /* CZ+ */

typedef struct ibs_fetch {
        ibs_fetch_ctl_t     fetch_ctl;
        ibs_fetch_extd_ctl  fetch_ctl_extd;
        uint64_t            fetch_lin_ad;
        ibs_fetch_phys_addr fetch_phys_ad;
        uint64_t            tsc;
        uint64_t            cr3;
        int                 tid;
        int                 pid;
        int                 cpu;
        int                 kern_mode;
} ibs_fetch_t;
typedef ibs_fetch_t ibs_fetch_v1_t;

void set_global_fetch_sample_rate(int sample_rate)
{
    int max_sample_rate = 1<<20;
    if (sample_rate < 0)
    {   
        fprintf(stderr, "Attempting to set IBS op sample rate too low - %d\n", sample_rate);
        fprintf(stderr, "This generation core should not be set below 0\n");
        exit(EXIT_FAILURE);
    }
    if (sample_rate >= max_sample_rate)
    {   
        fprintf(stderr, "Attempting to set IBS fetch sample rate too high - %d\n", sample_rate);
        fprintf(stderr, "This generation core can only support up to: %d\n", max_sample_rate-1);
        exit(EXIT_FAILURE);
    }
    fetch_cnt_max_to_set = sample_rate >> 4;
}

void sig_event_handler(int n, siginfo_t *info, void *unused)
{
    int fd;
    if (n == SIGNEW && my_id >= 0) {
        fd = info->si_int;
        //printf ("Received signal from kernel : Value =  %u\n", check);
        //read(check, read_buf, 1024);
        //printf("signal %d from file with fd %d\n", n, fd);
	ioctl(fd, IBS_DISABLE);

	interrupt_count++;

	ioctl(fd, IBS_ENABLE);
    }
}

int main()
{

	clock_t start, end;
        double cpu_time_used;

	//char filename [64];

	int num_cpus = get_nprocs_conf();
	int num_online_cpus = get_nprocs();
	int nopfds = 0;

	pid_t cpid;
	int cpu;
	int * fd = calloc(num_cpus, sizeof(int));
	buffer_size = BUFFER_SIZE_B;
	set_global_fetch_sample_rate(100000);

	int i;

	struct sigaction act;
        sigemptyset(&act.sa_mask);
        act.sa_flags = (SA_SIGINFO | SA_RESTART);
        act.sa_sigaction = sig_event_handler;
        sigaction(SIGNEW, &act, NULL);

	srand(time(NULL));
        int * indices = (int *) calloc (SIZE, sizeof(int));
        long sum = 0;
        // initialization
        for(i = 0; i < 1000; i++) {
                indices[i*32] = i;
        }

        // shuffling
        for (i = 999; i > 0; i--)
        {
          int j = rand() % i;
          int t = indices[j*32];
          indices[j*32] = indices[i*32];
          indices[i*32] = t;
        }
	

	#pragma omp parallel
	{
		char filename [64];
		my_id = omp_get_thread_num();
		n_op_samples[my_id] = 0;
        	n_lost_op_samples[my_id] = 0;
		global_buffer[my_id] = malloc(buffer_size);

		

		sprintf(filename, "/dev/cpu/%d/ibs/fetch", my_id);
                fd[my_id] = open(filename, O_RDONLY | O_NONBLOCK);

                if (fd[my_id] < 0) {
                        fprintf(stderr, "Could not open %s\n", filename);
                        goto END;
                        //continue;
                }

                ioctl(fd[my_id], SET_BUFFER_SIZE, buffer_size);
                //ioctl(fd[cpu], SET_POLL_SIZE, poll_size / sizeof(ibs_op_t));
		ioctl(fd[my_id], SET_MAX_CNT, fetch_cnt_max_to_set);
#if 0
		if (ioctl(fd[my_id], IBS_ENABLE)) {
                        fprintf(stderr, "IBS op enable failed on cpu %d\n", my_id);
                        goto END;
                        //continue;
                }
		//for (int i = 0; i < nopfds; i++)
                ioctl(fd[my_id], RESET_BUFFER);
#endif
		ioctl(fd[my_id], REG_CURRENT_PROCESS); 
		ioctl(fd[my_id], ASSIGN_FD, fd[my_id]);

		for (i = 0; i < SIZE; i += 32) {
            		asm volatile("clflush (%0)\n\t"
                         	:
                         	: "r"(&indices[i])
                         	: "memory");
        	}

        	asm volatile("sfence\n\t"
                 	:
                 	:
                 	: "memory");
//#if 0
		ioctl(fd[my_id], RESET_BUFFER);
		if (ioctl(fd[my_id], IBS_ENABLE)) {
                        fprintf(stderr, "IBS op enable failed on cpu %d\n", my_id);
                        goto END;
                        //continue;
                }
//#endif
		#pragma omp master
                {
                        start = clock();
                }
                #pragma omp barrier	
		__asm__ __volatile__ ("movl $1000000, %%edx\n\t"
                "loop1:\n\t"
                "movl $1000, %%eax\n\t"
                "movq %%rcx, %%rbx\n\t"
                "loop:\n\t"
                "movl (%%rbx), %%ebx\n\t"
                "shlq $7, %%rbx\n\t"
                "addq %%rcx, %%rbx\n\t"

		"addq $1, %%r8\n\t"
		"addq $1, %%r8\n\t"
		"addq $1, %%r8\n\t"
		"addq $1, %%r8\n\t"
		"addq $1, %%r8\n\t"

		"addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"

		"addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
		"addq $1, %%r8\n\t"

		"addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"

                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"	

		"addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"

                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"

		"addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"

                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"

                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"

                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"	

		"addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"

                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"

                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"

                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"

		"addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"

                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"

                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"

                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"
                "addq $1, %%r8\n\t"	

                "decl %%eax\n\t"
                "jnz loop\n\t"

                "decl %%edx\n\t"
                "jnz loop1\n\t"
                :
                : "c" (indices)
                : "%edx", "%eax", "%ebx", "memory", "cc"
            	);


		#pragma omp barrier
                #pragma omp master
                {
                        end = clock();
                        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

                printf("elapsed time: %0.3lf\n", cpu_time_used);
                }

                ioctl(fd[my_id], IBS_DISABLE);	

END:
		fprintf(stderr, "number of received OS signals: %d\n", interrupt_count);
                fprintf(stderr, "number of sampling interrupts: %d\n", ioctl(fd[my_id], GET_FETCH_SAMPLE_COUNT));
                fprintf(stderr, "number of sent OS signals: %d\n", ioctl(fd[my_id], GET_SIGNAL_COUNT));	
                close(fd[my_id]);

	}

	free(fd);
	free(indices);
	//fprintf(stderr, "no problem until this point, nopfds: %d, sum: %ld\n", nopfds, sum);
	//fprintf(stderr, "n_op_samples: %d\n", n_op_samples);
	//fprintf(stderr, "n_lost_op_samples: %d\n", n_lost_op_samples);
	return 0;
	// print results here
}
