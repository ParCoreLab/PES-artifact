
#include <stdio.h>
#include <omp.h>  

int main () {
        int val = 0;
#pragma omp parallel
        {
        	__asm__ __volatile__ ("movq $10000000000, %%rcx\n\t"
                	"movl $1, %%ebx\n\t"
                	"loop0:\n\t"
        		:
        		:
        		: "%ecx", "%ebx"
        	);
        	__asm__ __volatile__ ("movl %0, %%ebx\n\t"
        		:
        		: "m" (val)
        		: "memory", "%ebx"
        	);
        	__asm__ __volatile__ ("movl %0, %%ebx\n\t"
        		:
        		: "m" (val)
        		: "memory", "%ebx"
        	);	
        	__asm__ __volatile__ ("movl %0, %%ebx\n\t"
        		:
        		: "m" (val)
        		: "memory", "%ebx"
        	);
        	__asm__ __volatile__ ("movl %0, %%ebx\n\t"
        		:
        		: "m" (val)
        		: "memory", "%ebx"
        	);
        	__asm__ __volatile__ ("subq $1, %%rcx\n\t"
			"cmpq $0, %%rcx\n\t "
			"jne loop0\n\t"
                	:
                	:
                	: "%ecx"
            	);
#if 0
        __asm__ __volatile__ ("movq $10000000000, %%rcx\n\t"
                "movl $1, %%ebx\n\t"
                "loop0:\n\t"
                "movl %0, %%ebx\n\t"
		"movl %0, %%ebx\n\t"
                "subq $1, %%rcx\n\t"
		"cmpq $0, %%rcx\n\t "
		"jne loop0\n\t"
                : "=m" (val)
                :
                : "memory", "%ebx", "%ecx"
            );
#endif
        }
        printf("val: %d, address of val: %lx\n", val, (long) &val);
        printf("RD: 0, expected count: 100 M\n");
        return 0;
}
