#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SIZE 32000

int main() {

	clock_t start, end;
        double cpu_time_used;
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

                	"decl %%eax\n\t"
                	"jnz loop\n\t"

                	"decl %%edx\n\t"
                	"jnz loop1\n\t"
                	:
                	: "c" (indices)
                	: "%edx", "%eax", "%ebx", "memory", "cc"
                );
		end = clock();

		cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

	}
	printf("elapsed time: %0.3lf\n", cpu_time_used);
	free(indices);	
	return 0;
}
