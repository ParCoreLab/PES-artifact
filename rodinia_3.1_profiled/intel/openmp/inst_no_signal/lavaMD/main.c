//========================================================================================================================================================================================================200
//======================================================================================================================================================150
//====================================================================================================100
//==================================================50

//========================================================================================================================================================================================================200
//	UPDATE
//========================================================================================================================================================================================================200

//	14 APR 2011 Lukasz G. Szafaryn

//========================================================================================================================================================================================================200
//	DEFINE/INCLUDE
//========================================================================================================================================================================================================200

//======================================================================================================================================================150
//	LIBRARIES
//======================================================================================================================================================150
#include "perf.h"
#include <stdio.h>					// (in path known to compiler)			needed by printf
#include <stdlib.h>					// (in path known to compiler)			needed by malloc
#include <stdbool.h>				// (in path known to compiler)			needed by true/false

//======================================================================================================================================================150
//	UTILITIES
//======================================================================================================================================================150

#include "./util/timer/timer.h"			// (in path specified here)
#include "./util/num/num.h"				// (in path specified here)

//======================================================================================================================================================150
//	MAIN FUNCTION HEADER
//======================================================================================================================================================150

#include "./main.h"						// (in the current directory)

//======================================================================================================================================================150
//	KERNEL
//======================================================================================================================================================150

#include "./kernel/kernel_cpu.h"				// (in library path specified here)
//#include <fcntl.h>
//========================================================================================================================================================================================================200
//	MAIN FUNCTION
//========================================================================================================================================================================================================200

#define SIZE 32000

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

int 
main(	int argc, 
		char *argv [])
{

	//======================================================================================================================================================150
	//	CPU/MCPU VARIABLES
	//======================================================================================================================================================150

	// timer
	long long time0;

	clock_t start, end;
        double cpu_time_used;
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
        //fcntl(fd, F_SETSIG, SIGIO);
        //fcntl(fd, F_SETOWN,getpid());

	time0 = get_time();

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

	// timer
	long long time1;
	long long time2;
	long long time3;
	long long time4;
	long long time5;
	long long time6;
	long long time7;

	// counters
	int i, j, k, l, m, n;

	// system memory
	par_str par_cpu;
	dim_str dim_cpu;
	box_str* box_cpu;
	FOUR_VECTOR* rv_cpu;
	fp* qv_cpu;
	FOUR_VECTOR* fv_cpu;
	int nh;

	time1 = get_time();

	//======================================================================================================================================================150
	//	CHECK INPUT ARGUMENTS
	//======================================================================================================================================================150

	// assing default values
	dim_cpu.cores_arg = 1;
	dim_cpu.boxes1d_arg = 1;

	// go through arguments
	for(dim_cpu.cur_arg=1; dim_cpu.cur_arg<argc; dim_cpu.cur_arg++){
		// check if -cores
		if(strcmp(argv[dim_cpu.cur_arg], "-cores")==0){
			// check if value provided
			if(argc>=dim_cpu.cur_arg+1){
				// check if value is a number
				if(isInteger(argv[dim_cpu.cur_arg+1])==1){
					dim_cpu.cores_arg = atoi(argv[dim_cpu.cur_arg+1]);
					if(dim_cpu.cores_arg<0){
						printf("ERROR: Wrong value to -cores parameter, cannot be <=0\n");
						return 0;
					}
					dim_cpu.cur_arg = dim_cpu.cur_arg+1;
				}
				// value is not a number
				else{
					printf("ERROR: Value to -cores parameter in not a number\n");
					return 0;
				}
			}
			// value not provided
			else{
				printf("ERROR: Missing value to -cores parameter\n");
				return 0;
			}
		}
		// check if -boxes1d
		else if(strcmp(argv[dim_cpu.cur_arg], "-boxes1d")==0){
			// check if value provided
			if(argc>=dim_cpu.cur_arg+1){
				// check if value is a number
				if(isInteger(argv[dim_cpu.cur_arg+1])==1){
					dim_cpu.boxes1d_arg = atoi(argv[dim_cpu.cur_arg+1]);
					if(dim_cpu.boxes1d_arg<0){
						printf("ERROR: Wrong value to -boxes1d parameter, cannot be <=0\n");
						return 0;
					}
					dim_cpu.cur_arg = dim_cpu.cur_arg+1;
				}
				// value is not a number
				else{
					printf("ERROR: Value to -boxes1d parameter in not a number\n");
					return 0;
				}
			}
			// value not provided
			else{
				printf("ERROR: Missing value to -boxes1d parameter\n");
				return 0;
			}
		}
		// unknown
		else{
			printf("ERROR: Unknown parameter\n");
			return 0;
		}
	}

	// Print configuration
	printf("Configuration used: cores = %d, boxes1d = %d\n", dim_cpu.cores_arg, dim_cpu.boxes1d_arg);

	time2 = get_time();

	//======================================================================================================================================================150
	//	INPUTS
	//======================================================================================================================================================150

	par_cpu.alpha = 0.5;

	time3 = get_time();

	//======================================================================================================================================================150
	//	DIMENSIONS
	//======================================================================================================================================================150

	// total number of boxes
	dim_cpu.number_boxes = dim_cpu.boxes1d_arg * dim_cpu.boxes1d_arg * dim_cpu.boxes1d_arg;

	// how many particles space has in each direction
	dim_cpu.space_elem = dim_cpu.number_boxes * NUMBER_PAR_PER_BOX;
	dim_cpu.space_mem = dim_cpu.space_elem * sizeof(FOUR_VECTOR);
	dim_cpu.space_mem2 = dim_cpu.space_elem * sizeof(fp);

	// box array
	dim_cpu.box_mem = dim_cpu.number_boxes * sizeof(box_str);

	time4 = get_time();

	//======================================================================================================================================================150
	//	SYSTEM MEMORY
	//======================================================================================================================================================150

	//====================================================================================================100
	//	BOX
	//====================================================================================================100

	// allocate boxes
	box_cpu = (box_str*)malloc(dim_cpu.box_mem);

	// initialize number of home boxes
	nh = 0;

	// home boxes in z direction
	for(i=0; i<dim_cpu.boxes1d_arg; i++){
		// home boxes in y direction
		for(j=0; j<dim_cpu.boxes1d_arg; j++){
			// home boxes in x direction
			for(k=0; k<dim_cpu.boxes1d_arg; k++){

				// current home box
				box_cpu[nh].x = k;
				box_cpu[nh].y = j;
				box_cpu[nh].z = i;
				box_cpu[nh].number = nh;
				box_cpu[nh].offset = nh * NUMBER_PAR_PER_BOX;

				// initialize number of neighbor boxes
				box_cpu[nh].nn = 0;

				// neighbor boxes in z direction
				for(l=-1; l<2; l++){
					// neighbor boxes in y direction
					for(m=-1; m<2; m++){
						// neighbor boxes in x direction
						for(n=-1; n<2; n++){

							// check if (this neighbor exists) and (it is not the same as home box)
							if(		(((i+l)>=0 && (j+m)>=0 && (k+n)>=0)==true && ((i+l)<dim_cpu.boxes1d_arg && (j+m)<dim_cpu.boxes1d_arg && (k+n)<dim_cpu.boxes1d_arg)==true)	&&
									(l==0 && m==0 && n==0)==false	){

								// current neighbor box
								box_cpu[nh].nei[box_cpu[nh].nn].x = (k+n);
								box_cpu[nh].nei[box_cpu[nh].nn].y = (j+m);
								box_cpu[nh].nei[box_cpu[nh].nn].z = (i+l);
								box_cpu[nh].nei[box_cpu[nh].nn].number =	(box_cpu[nh].nei[box_cpu[nh].nn].z * dim_cpu.boxes1d_arg * dim_cpu.boxes1d_arg) + 
																			(box_cpu[nh].nei[box_cpu[nh].nn].y * dim_cpu.boxes1d_arg) + 
																			 box_cpu[nh].nei[box_cpu[nh].nn].x;
								box_cpu[nh].nei[box_cpu[nh].nn].offset = box_cpu[nh].nei[box_cpu[nh].nn].number * NUMBER_PAR_PER_BOX;

								// increment neighbor box
								box_cpu[nh].nn = box_cpu[nh].nn + 1;

							}

						} // neighbor boxes in x direction
					} // neighbor boxes in y direction
				} // neighbor boxes in z direction

				// increment home box
				nh = nh + 1;

			} // home boxes in x direction
		} // home boxes in y direction
	} // home boxes in z direction

	//====================================================================================================100
	//	PARAMETERS, DISTANCE, CHARGE AND FORCE
	//====================================================================================================100

	// random generator seed set to random value - time in this case
	srand(time(NULL));

	// input (distances)
	rv_cpu = (FOUR_VECTOR*)malloc(dim_cpu.space_mem);
	for(i=0; i<dim_cpu.space_elem; i=i+1){
		rv_cpu[i].v = (rand()%10 + 1) / 10.0;			// get a number in the range 0.1 - 1.0
		rv_cpu[i].x = (rand()%10 + 1) / 10.0;			// get a number in the range 0.1 - 1.0
		rv_cpu[i].y = (rand()%10 + 1) / 10.0;			// get a number in the range 0.1 - 1.0
		rv_cpu[i].z = (rand()%10 + 1) / 10.0;			// get a number in the range 0.1 - 1.0
	}

	// input (charge)
	qv_cpu = (fp*)malloc(dim_cpu.space_mem2);
	for(i=0; i<dim_cpu.space_elem; i=i+1){
		qv_cpu[i] = (rand()%10 + 1) / 10.0;			// get a number in the range 0.1 - 1.0
	}

	// output (forces)
	fv_cpu = (FOUR_VECTOR*)malloc(dim_cpu.space_mem);
	for(i=0; i<dim_cpu.space_elem; i=i+1){
		fv_cpu[i].v = 0;								// set to 0, because kernels keeps adding to initial value
		fv_cpu[i].x = 0;								// set to 0, because kernels keeps adding to initial value
		fv_cpu[i].y = 0;								// set to 0, because kernels keeps adding to initial value
		fv_cpu[i].z = 0;								// set to 0, because kernels keeps adding to initial value
	}

	time5 = get_time();

	//======================================================================================================================================================150
	//	KERNEL
	//======================================================================================================================================================150

	//====================================================================================================100
	//	CPU/MCPU
	//====================================================================================================100

	kernel_cpu(	par_cpu,
				dim_cpu,
				box_cpu,
				rv_cpu,
				qv_cpu,
				fv_cpu);

	time6 = get_time();

	//======================================================================================================================================================150
	//	SYSTEM MEMORY DEALLOCATION
	//======================================================================================================================================================150

	// dump results
#ifdef OUTPUT
        FILE *fptr;
	fptr = fopen("result.txt", "w");	
	for(i=0; i<dim_cpu.space_elem; i=i+1){
        	fprintf(fptr, "%f, %f, %f, %f\n", fv_cpu[i].v, fv_cpu[i].x, fv_cpu[i].y, fv_cpu[i].z);
	}
	fclose(fptr);
#endif       	



	free(rv_cpu);
	free(qv_cpu);
	free(fv_cpu);
	free(box_cpu);

	//int pebs_count = ioctl(fd, PERF_EVENT_IOC_PEBS_INTERRUPT_COUNT, 0);
	ret=ioctl(fd, PERF_EVENT_IOC_REFRESH,0);

	time7 = get_time();

	//======================================================================================================================================================150
	//	DISPLAY TIMING
	//======================================================================================================================================================150

	// printf("Time spent in different stages of the application:\n");

	// printf("%15.12f s, %15.12f % : VARIABLES\n",						(float) (time1-time0) / 1000000, (float) (time1-time0) / (float) (time7-time0) * 100);
	// printf("%15.12f s, %15.12f % : INPUT ARGUMENTS\n", 					(float) (time2-time1) / 1000000, (float) (time2-time1) / (float) (time7-time0) * 100);
	// printf("%15.12f s, %15.12f % : INPUTS\n",							(float) (time3-time2) / 1000000, (float) (time3-time2) / (float) (time7-time0) * 100);
	// printf("%15.12f s, %15.12f % : dim_cpu\n", 							(float) (time4-time3) / 1000000, (float) (time4-time3) / (float) (time7-time0) * 100);
	// printf("%15.12f s, %15.12f % : SYS MEM: ALO\n",						(float) (time5-time4) / 1000000, (float) (time5-time4) / (float) (time7-time0) * 100);

	// printf("%15.12f s, %15.12f % : KERNEL: COMPUTE\n",					(float) (time6-time5) / 1000000, (float) (time6-time5) / (float) (time7-time0) * 100);

	// printf("%15.12f s, %15.12f % : SYS MEM: FRE\n", 					(float) (time7-time6) / 1000000, (float) (time7-time6) / (float) (time7-time0) * 100);

	//cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

        //printf("elapsed time: %0.3lf\n", cpu_time_used);
        if (count_total==0) {
                printf("No overflow events generated.\n");
                //test_fail(test_string);
        }
        munmap(our_mmap,mmap_pages*4096);

        close(fd);

	printf("Total time:\n");
	printf("%.12f s\n", 												(float) (time7-time0) / 1000000);

	//printf("pebs_count: %d\n", pebs_count);
	printf("count_total: %d\n", count_total);
	//======================================================================================================================================================150
	//	RETURN
	//======================================================================================================================================================150

	return 0.0;																					// always returns 0.0

}
