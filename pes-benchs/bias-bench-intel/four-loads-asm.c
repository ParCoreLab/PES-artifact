#include <stdio.h>
#include <time.h>
#include <omp.h>

__thread int my_id = -1;

int main () {
        int val = 0;
	void *ptr1, *ptr2, *ptr3, *ptr4, *ptr5, *ptr6;
	clock_t start, end;
        double cpu_time_used;
#pragma omp parallel
        {
		my_id = omp_get_thread_num();
		start = clock();	
	
label1:
        	__asm__ __volatile__ ("movq $10000000000, %%rcx\n\t"
                	"movl $1, %%ebx\n\t"
                	"loop0:\n\t"
        		:
        		:
        		: "%ecx", "%ebx"
        	);
label2:
        	__asm__ __volatile__ ("movl %0, %%ebx\n\t"
        		:
        		: "m" (val)
        		: "memory", "%ebx"
        	);
label3:
        	__asm__ __volatile__ ("movl %0, %%ebx\n\t"
        		:
        		: "m" (val)
        		: "memory", "%ebx"
        	);
label4:	
        	__asm__ __volatile__ ("movl %0, %%ebx\n\t"
        		:
        		: "m" (val)
        		: "memory", "%ebx"
        	);
label5:
        	__asm__ __volatile__ ("movl %0, %%ebx\n\t"
        		:
        		: "m" (val)
        		: "memory", "%ebx"
        	);
label6:
        	__asm__ __volatile__ ("subq $1, %%rcx\n\t"
			"cmpq $0, %%rcx\n\t "
			"jne loop0\n\t"
                	:
                	:
                	: "%ecx"
            	);

                end = clock();

                cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

                printf("elapsed time: %0.3lf\n", cpu_time_used);

END:	
		ptr1 = &&label1;
		ptr2 = &&label2;
		ptr3 = &&label3;
		ptr4 = &&label4;
		ptr5 = &&label5;
		ptr6 = &&label6;
        }
        printf("val: %d, address of val: %lx ptr1: %lx ptr2: %lx ptr3: %lx ptr4: %lx ptr5: %lx ptr6: %lx\n", val, (long) &val, (long) ptr1, (long) ptr2,(long) ptr3,(long) ptr4,(long) ptr5,(long) ptr6);
        printf("RD: 0, expected count: 100 M\n");
        return 0;
}
