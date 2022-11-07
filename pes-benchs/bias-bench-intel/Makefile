
install:
	gcc four-loads-asm.c -o four-loads-asm -fopenmp

test:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 perf record -d -e mem_inst_retired.all_loads:up -c 100000 ./four-loads-asm 1>> bias_bench_log 2>> bias_bench_log
	perf script -F time,ip,addr 1>> perf_log 2>> perf_log
	var1=$$(awk '/val:/ {print $$6}' bias_bench_log) && awk -v pat="$$var1" '$$0 ~ pat {table[$$3]++;} END { for (key in table) { print key ": " table[key] } }' perf_log 1>> bias_bench_log 2>> bias_bench_log

run5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 perf record -e mem_inst_retired.all_loads:up -c 100000 ./four-loads-asm 1>> inst_attr_log1 2>> inst_attr_log1
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 perf record -e mem_inst_retired.all_loads:up -c 100000 ./four-loads-asm 1>> inst_attr_log2 2>> inst_attr_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 perf record -e mem_inst_retired.all_loads:up -c 100000 ./four-loads-asm 1>> inst_attr_log3 2>> inst_attr_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 perf record -e mem_inst_retired.all_loads:up -c 100000 ./four-loads-asm 1>> inst_attr_log4 2>> inst_attr_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 perf record -e mem_inst_retired.all_loads:up -c 100000 ./four-loads-asm 1>> inst_attr_log5 2>> inst_attr_log5

clean:
	rm *_log*
	rm four-loads-asm
