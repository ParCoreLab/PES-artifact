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

#include "cpu_check.h"

#define SIGNEW 44
#define SET_BUFFER_SIZE 0xEU
#define BUFFER_SIZE_B   (1 << 10)
#define SET_MAX_CNT     0x6U
#define OP_MAX_CNT  0x4000
#define IBS_ENABLE      0x0U
#define IBS_DISABLE     0x1U
#define RESET_BUFFER    0x10U
#define GET_LOST        0xEEU

#define REG_CURRENT_PROCESS _IOW('a', 'a', int32_t*)
#define ASSIGN_FD 102

int n_op_samples[1024];
int n_lost_op_samples[1024];

int fetch_cnt_max_to_set = 0;
int buffer_size = 0;
char *global_buffer[1024] = {NULL};

int thread_count = 0;
__thread int my_id = -1;
/* The following unions can be used to pull out specific values from inside of
   an IBS sample. */

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
        // before
        int tmp = 0;
        int num_items = 0;

        tmp = read(fd, global_buffer[my_id], buffer_size);
        if (tmp <= 0) {
                ioctl(fd, IBS_ENABLE);
                return;
        }
        num_items = tmp / sizeof(ibs_fetch_t);
        n_op_samples[my_id] += num_items;
        n_lost_op_samples[my_id] += ioctl(fd, GET_LOST);
        // after
        ioctl(fd, IBS_ENABLE);
    }
}
