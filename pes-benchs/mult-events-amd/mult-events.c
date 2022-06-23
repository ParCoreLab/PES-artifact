
#include <stdio.h>
#include <omp.h>  

void foo1() {
        //printf("1\n");
        return;
}

int main () {
        int val = 0;
#pragma omp parallel
        {
        __asm__ __volatile__ ("movq $100000000, %%rcx\n\t"
                "loop0:\n\t"
                "call foo1\n\t"
		"lock\n\t"
		"addl $1, %0\n\t"
		"lock\n\t"
		"addl $1, %0\n\t"
		"movl %0, %%ebx\n\t"
                "subq $1, %%rcx\n\t"
		"cmpq $0, %%rcx\n\t"
		"je loop1\n\t"
		"cmpq $0, %%rcx\n\t"
		"jne loop0\n\t"
		"loop1:\n\t"
                : "=m" (val)
                :
                : "memory", "%eax", "%ebx", "%ecx"
            );
        }
        printf("val: %d, address of val: %lx\n", val, (long) &val);
        printf("RD: 0, expected count: 100 M\n");
        return 0;
}
