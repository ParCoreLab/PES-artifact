#include "perf.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "backprop.h"
#include "omp.h"

#if 0
#define SAMPLE_PERIOD 100000

#define MMAP_DATA_SIZE 32

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
#endif

extern char *strcpy();
extern void exit();

int layer_size = 0;

backprop_face()
{
  BPNN *net;
  int i;
  float out_err, hid_err;
  clock_t start, end;
        double cpu_time_used;

  long long time0;

        int ret;
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

//#include "perf_event.h"

//#include "test_utils.h"
//#include "perf_helpers.h"
//#include "matrix_multiply.h"
//#include "parse_record.h"/#include "perf_barrier.h"
//#include "perf_event.h"

//#include "test_utils.h"
//#include "perf_helpers.h"
//#include "matrix_multiply.h"
//#include "parse_record.h"include "perf_barrier.h"
//#include "perf_event.h"

//#include "test_utils.h"
//#include "perf_helpers.h"
//#include "matrix_multiply.h"
//#include "parse_record.h"	

        start = clock();

	ioctl(fd, PERF_EVENT_IOC_RESET, 0);

//#if 0
        ret=ioctl(fd, PERF_EVENT_IOC_ENABLE,0);

        if (ret<0) {
                fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
                        "of group leader: %d %s\n",
                        errno,strerror(errno));
                exit(1);
        }
//#endif
	//ioctl(fd, PERF_EVENT_IOC_PEBS_INTERRUPT_COUNT, 0);

  	net = bpnn_create(layer_size, 16, 1); // (16, 1 can not be changed)
  	printf("Input layer size : %d\n", layer_size);
  	load(net);
  	//entering the training kernel, only one iteration
  	printf("Starting training kernel\n");
  	bpnn_train_kernel(net, &out_err, &hid_err);
  	bpnn_free(net);
  	printf("Training done\n");

  	
	//int pebs_count = ioctl(fd, PERF_EVENT_IOC_PEBS_INTERRUPT_COUNT, 0);
  	ret=ioctl(fd, PERF_EVENT_IOC_REFRESH,0);

  	end = clock();

        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

        printf("elapsed time: %0.3lf\n", cpu_time_used);

	munmap(our_mmap,mmap_pages*4096);
	printf("count_total: %d\n", count_total);
	//printf("pebs_count: %d\n", pebs_count);
}

int setup(argc, argv)
int argc;
char *argv[];
{
  if(argc!=2){
  fprintf(stderr, "usage: backprop <num of input elements>\n");
  exit(0);
  }

  layer_size = atoi(argv[1]);
  
  int seed;

  seed = 7;   
  bpnn_initialize(seed);
  backprop_face();

  exit(0);
}
