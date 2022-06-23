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
static int fd1;
static int fd2;
static int fd3;
static int fd4;
static int fd5;
static int fd6;
static int fd7;
static int fd8;
static int fd9;
static int fd10;
static int fd11;
static int fd12;
static int fd13;
static int fd14;
static int fd15;

static void our_handler(int signum, siginfo_t *info, void *uc) {
        int ret;

        ret=ioctl(fd, PERF_EVENT_IOC_DISABLE, 0);
	ret=ioctl(fd1, PERF_EVENT_IOC_DISABLE, 0);


        count_total++;

        ret=ioctl(fd, PERF_EVENT_IOC_ENABLE,1);
	ret=ioctl(fd1, PERF_EVENT_IOC_ENABLE,1);

        (void) ret;
}
