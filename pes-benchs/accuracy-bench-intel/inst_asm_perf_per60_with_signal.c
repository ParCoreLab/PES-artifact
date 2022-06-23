
#define _GNU_SOURCE 1

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#include <unistd.h>
#include <fcntl.h>

#include <errno.h>

#include <signal.h>
#include <sys/mman.h>

#include <sys/ioctl.h>
#include <asm/unistd.h>
#include <sys/prctl.h>
#include <linux/perf_event.h>
#if defined(__x86_64__) || defined(__i386__) ||defined(__arm__)
#include <asm/perf_regs.h>
#endif

#include <time.h>
#define SIZE 32000

#define SAMPLE_PERIOD 100000

#define MMAP_DATA_SIZE 32

/* Global vars as I'm lazy */
static int count_total=0;
static char *our_mmap;
static long sample_type;

long perf_event_open(struct perf_event_attr *hw_event, pid_t pid,
         int cpu, int group_fd, unsigned long flags)
{
   int ret;

   ret = syscall(__NR_perf_event_open, hw_event, pid, cpu, group_fd, flags);
   return ret;
}

static int fd;

static void our_handler(int signum, siginfo_t *info, void *uc) {
        int ret;

        ret=ioctl(fd, PERF_EVENT_IOC_DISABLE, 0);


        count_total++;

        ret=ioctl(fd, PERF_EVENT_IOC_ENABLE,1);

        (void) ret;
}


int main(int argc, char **argv) {

	clock_t start, end;
        double cpu_time_used;
	int ret;
	int pebs_count;
	//int fd;
	int mmap_pages=1+MMAP_DATA_SIZE;

	struct perf_event_attr pe;

	struct sigaction sa;

	memset(&sa, 0, sizeof(struct sigaction));
        sa.sa_sigaction = our_handler;
        sa.sa_flags = SA_SIGINFO;

        if (sigaction( SIGIO, &sa, NULL) < 0) {
                fprintf(stderr,"Error setting up signal handler\n");
                exit(1);
        }

        /* Set up Instruction Event */

        memset(&pe,0,sizeof(struct perf_event_attr));

	sample_type=PERF_SAMPLE_IP|PERF_SAMPLE_ADDR;

        pe.type=PERF_TYPE_RAW;
        pe.size=sizeof(struct perf_event_attr);
        //pe.config=PERF_COUNT_HW_INSTRUCTIONS;

	 /* MEM_UOPS_RETIRED:ALL_LOADS */
	//pe.config = 0x81d0;
	//pe.config = 0x08d1;
	/* INST_RETIRED.PREC_DIST */
	pe.config = 0x01c0;

        pe.sample_period=SAMPLE_PERIOD;
        pe.sample_type=sample_type;

        pe.disabled=1;
        pe.pinned=1;
        pe.exclude_kernel=1;
        pe.exclude_hv=1;
        pe.wakeup_events=1;
	pe.watermark=0;
	pe.precise_ip=2;

	//arch_adjust_domain(&pe,quiet);

	fd=perf_event_open(&pe,0,-1,-1,0);
	if (fd<0) {
		fprintf(stderr,"Problem opening leader %s\n",
			strerror(errno));
			//test_fail(test_string);
	}
	our_mmap=mmap(NULL, mmap_pages*4096,
		PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0);

	fcntl(fd, F_SETFL, O_RDWR|O_NONBLOCK|O_ASYNC);
	fcntl(fd, F_SETSIG, SIGIO);
	fcntl(fd, F_SETOWN,getpid());
	//ioctl(fd, PERF_EVENT_IOC_PEBS_INTERRUPT_COUNT, 0);
	

	// populating memory
    	srand(time(NULL));
        int * indices = (int *) calloc (SIZE, sizeof(int));
        long sum = 0;
        int i;
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

	start = clock();
	//ioctl(fd, PERF_EVENT_IOC_PEBS_INTERRUPT_COUNT, 0);
	ioctl(fd, PERF_EVENT_IOC_RESET, 0);

	ret=ioctl(fd, PERF_EVENT_IOC_ENABLE,0);

	if (ret<0) {
		fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
			"of group leader: %d %s\n",
			errno,strerror(errno));
		exit(1);
	}	

	ioctl(fd, PERF_EVENT_IOC_PEBS_SAMPLE_COUNT, 0);
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

                "decl %%eax\n\t"
                "jnz loop\n\t"

                "decl %%edx\n\t"
                "jnz loop1\n\t"
                :
                : "c" (indices)
                : "%edx", "%eax", "%ebx", "memory", "cc"
                );

	pebs_count = ioctl(fd, PERF_EVENT_IOC_PEBS_SAMPLE_COUNT, 0);
	ret=ioctl(fd, PERF_EVENT_IOC_REFRESH,0);

	end = clock();

        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

	}

        printf("elapsed time: %0.3lf\n", cpu_time_used);
	if (count_total==0) {
		printf("No overflow events generated.\n");
		//test_fail(test_string);
	}
	munmap(our_mmap,mmap_pages*4096);

	close(fd);

	free(indices);
	//test_pass(test_string);
	printf("count_total: %d\n", count_total);
	printf("pebs_count: %d\n", pebs_count);

	return 0;
}

