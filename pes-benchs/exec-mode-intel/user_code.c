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

#define TEST_CMD 103

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

int main() {

//#if 0
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
        pe.config = 0x21d0;
//#endif
        //pe.config = 0x08d1;
        /* INST_RETIRED.PREC_DIST */
        //pe.config = 0x01c0;

        pe.sample_period=SAMPLE_PERIOD;
        pe.sample_type=sample_type;

        pe.disabled=1;
        pe.pinned=1;
        pe.exclude_kernel=1;
	pe.exclude_user=0;
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

	int fd1;
	int32_t val = 10;
	unsigned int num;
	printf("in IOCTL based character device driver operation from user space..\n");
	fd1 = open("/dev/my_device", O_RDWR);
	
	if(fd1 < 0) {
		printf("cannot open the device file...\n");
		return 0;
	}

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

	 __asm__ __volatile__ (
		"movq $1000000, %%r8\n\t"
		"loop0:\n\t"
		"movl $0x10, %%eax\n\t"
                "movl $0x67, %%esi\n\t" 
                "syscall\n\t"
		"subq $1, %%r8\n\t"
		"cmpq $0, %%r8\n\t "
		"jne loop0\n\t"
                :
                : "m" (val), "D" (fd1)
                : "memory", "%eax", "%esi", "%r8"
                );

	pebs_count = ioctl(fd, PERF_EVENT_IOC_PEBS_SAMPLE_COUNT, 0);
        ret=ioctl(fd, PERF_EVENT_IOC_REFRESH,0);

        end = clock();

        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

        printf("elapsed time: %0.3lf\n", cpu_time_used);
        if (count_total==0) {
                printf("No overflow events generated.\n");
                //test_fail(test_string);
        }
        munmap(our_mmap,mmap_pages*4096);

        close(fd);

        //test_pass(test_string);
        printf("count_total: %d\n", count_total);
        printf("pebs_count: %d\n", pebs_count);

	printf("Closing driver..\n");
	close(fd);
	return 0;
}
