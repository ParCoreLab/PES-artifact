
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
#include <omp.h>

#include <unistd.h>
#include <sys/syscall.h>
#define SIZE 32000

#define SAMPLE_PERIOD 100000

#define MMAP_DATA_SIZE 32

static long sample_type;

int main(int argc, char **argv) {

	clock_t start, end;
        double cpu_time_used;
	int ret;

	//arch_adjust_domain(&pe,quiet);

#pragma omp parallel
        {
	int tid = omp_get_thread_num();

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

	#pragma omp master
	{
	start = clock();	
	}
	#pragma omp barrier
        //#pragma omp parallel
        //{
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
		}
		free(indices);

	}

        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

        printf("elapsed time: %0.3lf\n", cpu_time_used);

	return 0;
}

