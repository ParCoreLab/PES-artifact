
install:
	gcc four-loads-asm.c cpu_check.c -o four-loads-asm -fopenmp

run5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 ./four-loads-asm 1>> inst_attr_log 2>> inst_attr_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 ./four-loads-asm 1>> inst_attr_log 2>> inst_attr_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 ./four-loads-asm 1>> inst_attr_log 2>> inst_attr_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 ./four-loads-asm 1>> inst_attr_log 2>> inst_attr_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 ./four-loads-asm 1>> inst_attr_log 2>> inst_attr_log

clean:
	rm *_log
	rm four-loads-asm
