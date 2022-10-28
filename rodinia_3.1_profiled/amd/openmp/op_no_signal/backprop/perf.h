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

#define ANY_MICRO_OP 106
#define CACHE_MISS_ONLY 107

int interrupt_count = 0;

int n_op_samples[1024];
int n_lost_op_samples[1024];

int op_cnt_max_to_set = 0;
int buffer_size = 0;
char *global_buffer[1024] = {NULL};

int thread_count = 0;
__thread int my_id = -1;
/* The following unions can be used to pull out specific values from inside of
   an IBS sample. */
typedef union {
    uint64_t val;
    struct {
        uint16_t ibs_op_max_cnt     : 16;
        uint16_t reserved_1          : 1;
        uint16_t ibs_op_en           : 1;
        uint16_t ibs_op_val          : 1;
        uint16_t ibs_op_cnt_ctl      : 1;
        uint16_t ibs_op_max_cnt_upper: 7;
        uint16_t reserved_2          : 5;
        uint32_t ibs_op_cur_cnt     : 27;
        uint32_t reserved_3          : 5;
    } reg;
} ibs_op_ctl_t;

typedef union {
    uint64_t val;
    struct {
        uint16_t ibs_comp_to_ret_ctr;
        uint16_t ibs_tag_to_ret_ctr;
        uint8_t ibs_op_brn_resync   : 1; /* Fam. 10h, LN, BD only */
        uint8_t ibs_op_misp_return  : 1; /* Fam. 10h, LN, BD only */
        uint8_t ibs_op_return       : 1;
        uint8_t ibs_op_brn_taken    : 1;
        uint8_t ibs_op_brn_misp     : 1;
        uint8_t ibs_op_brn_ret      : 1;
        uint8_t ibs_rip_invalid     : 1;
        uint8_t ibs_op_brn_fuse     : 1; /* KV+, BT+ */
        uint8_t ibs_op_microcode    : 1; /* KV+, BT+ */
        uint32_t reserved           : 23;
    } reg;
} ibs_op_data1_t;

typedef union {
    uint64_t val;
    struct {
        uint8_t  ibs_nb_req_src          : 3;
        uint8_t  reserved_1              : 1;
        uint8_t  ibs_nb_req_dst_node     : 1; /* Not valid in BT, JG */
        uint8_t  ibs_nb_req_cache_hit_st : 1; /* Not valid in BT, JG */
        uint64_t reserved_2              : 58;
    } reg;
} ibs_op_data2_t;

typedef union {
    uint64_t val;
    struct {
        uint8_t ibs_ld_op                    : 1;
        uint8_t ibs_st_op                    : 1;
        uint8_t ibs_dc_l1_tlb_miss           : 1;
        uint8_t ibs_dc_l2_tlb_miss           : 1;
        uint8_t ibs_dc_l1_tlb_hit_2m         : 1;
        uint8_t ibs_dc_l1_tlb_hit_1g         : 1;
        uint8_t ibs_dc_l2_tlb_hit_2m         : 1;
        uint8_t ibs_dc_miss                  : 1;
        uint8_t ibs_dc_miss_acc              : 1;
        uint8_t ibs_dc_ld_bank_con           : 1; /* Fam. 10h, LN, BD only */
        uint8_t ibs_dc_st_bank_con           : 1; /* Fam. 10h, LN only */
        uint8_t ibs_dc_st_to_ld_fwd          : 1; /* Fam. 10h, LN, BD, BT+ */
        uint8_t ibs_dc_st_to_ld_can          : 1; /* Fam. 10h, LN, BD only */
        uint8_t ibs_dc_wc_mem_acc            : 1;
        uint8_t ibs_dc_uc_mem_acc            : 1;
        uint8_t ibs_dc_locked_op             : 1;
        uint16_t ibs_dc_no_mab_alloc         : 1; /* Fam. 10h-TN:
                                                    IBS DC MAB hit */
        uint16_t ibs_lin_addr_valid          : 1;
        uint16_t ibs_phy_addr_valid          : 1;
        uint16_t ibs_dc_l2_tlb_hit_1g        : 1;
        uint16_t ibs_l2_miss                 : 1; /* KV+, BT+ */
        uint16_t ibs_sw_pf                   : 1; /* KV+, BT+ */
        uint16_t ibs_op_mem_width            : 4; /* KV+, BT+ */
        uint16_t ibs_op_dc_miss_open_mem_reqs: 6; /* KV+, BT+ */
        uint16_t ibs_dc_miss_lat;
        uint16_t ibs_tlb_refill_lat; /* KV+, BT+ */
    } reg;
} ibs_op_data3_t;

typedef union {
    uint64_t val;
    struct {
        uint8_t ibs_op_ld_resync: 1;
        uint64_t reserved       : 63;
    } reg;
} ibs_op_data4_t; /* CZ, ST only */

typedef union {
    uint64_t val;
    struct {
        uint64_t ibs_dc_phys_addr   : 48;
        uint64_t reserved           : 16;
    } reg;
} ibs_op_dc_phys_addr_t;


typedef struct ibs_op {
        ibs_op_ctl_t            op_ctl;
        uint64_t                op_rip;
        ibs_op_data1_t          op_data;
        ibs_op_data2_t          op_data2;
        ibs_op_data3_t          op_data3;
        ibs_op_data4_t          op_data4;
        uint64_t                dc_lin_ad;
        ibs_op_dc_phys_addr_t   dc_phys_ad;
        uint64_t                br_target;
        uint64_t                tsc;
        uint64_t                cr3;
        int                     tid;
        int                     pid;
        int                     cpu;
        int                     kern_mode;
} ibs_op_t;

void set_global_op_sample_rate(int sample_rate)
{
    int max_sample_rate = 0;
    // Check for proper IBS support before we try to read the CPUID information
    // about the maximum sample rate.
    check_amd_processor();
    check_basic_ibs_support();
    check_ibs_op_support();

    if (sample_rate < 0x90)
    {
        fprintf(stderr, "Attempting to set IBS op sample rate too low - %d\n", sample_rate);
        fprintf(stderr, "This generation core should not be set below %d\n", 0x90);
        exit(EXIT_FAILURE);
    }
    uint32_t ibs_id = get_deep_ibs_info();
    uint32_t extra_bits = (ibs_id & (1 << 6)) >> 6;
    if (!extra_bits)
        max_sample_rate = 1<<20;
    else
        max_sample_rate = 1<<27;

    if (sample_rate >= max_sample_rate)
    {
        fprintf(stderr, "Attempting to set IBS op sample rate too high - %d\n", sample_rate);
        fprintf(stderr, "This generation core can only support up to: %d\n", max_sample_rate-1);
        exit(EXIT_FAILURE);
    }
    op_cnt_max_to_set = sample_rate >> 4;
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

	interrupt_count++;

        tmp = read(fd, global_buffer[my_id], buffer_size);
        if (tmp <= 0) {
                ioctl(fd, IBS_ENABLE);
                return;
        }
        num_items = tmp / sizeof(ibs_op_t);
        n_op_samples[my_id] += num_items;
        n_lost_op_samples[my_id] += ioctl(fd, GET_LOST);
        // after
        ioctl(fd, IBS_ENABLE);
    }
}
