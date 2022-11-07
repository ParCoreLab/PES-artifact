
install:
	gcc four-loads-asm.c -o four-loads-asm -fopenmp

test:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 perf record -d -e mem_inst_retired.all_loads:up -c 100000 ./four-loads-asm 1>> bias_bench_log 2>> bias_bench_log
	perf script -F time,ip,addr 1>> perf_log 2>> perf_log
	var1=$$(awk '/val:/ {print $$6}' bias_bench_log) && awk -v pat="$$var1" '$$0 ~ pat {table[$$3]++;} END { for (key in table) { print key ": " table[key] } }' perf_log 1>> bias_bench_log 2>> bias_bench_log

run5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 perf record -d -e mem_inst_retired.all_loads:up -c 100000 ./four-loads-asm 1>> bias_bench_log1 2>> bias_bench_log1
	perf script -F time,ip,addr 1>> perf_log1 2>> perf_log1
	var1=$$(awk '/val:/ {print $$6}' bias_bench_log1) && awk -v pat="$$var1" '$$0 ~ pat {table[$$3]++;} END { for (key in table) { print key ": " table[key] } }' perf_log1 1>> bias_bench_log1 2>> bias_bench_log1	
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 perf record -d -e mem_inst_retired.all_loads:up -c 100000 ./four-loads-asm 1>> bias_bench_log2 2>> bias_bench_log2
	perf script -F time,ip,addr 1>> perf_log2 2>> perf_log2
	var1=$$(awk '/val:/ {print $$6}' bias_bench_log2) && awk -v pat="$$var1" '$$0 ~ pat {table[$$3]++;} END { for (key in table) { print key ": " table[key] } }' perf_log2 1>> bias_bench_log2 2>> bias_bench_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 perf record -d -e mem_inst_retired.all_loads:up -c 100000 ./four-loads-asm 1>> bias_bench_log3 2>> bias_bench_log3
	perf script -F time,ip,addr 1>> perf_log3 2>> perf_log3
	var1=$$(awk '/val:/ {print $$6}' bias_bench_log3) && awk -v pat="$$var1" '$$0 ~ pat {table[$$3]++;} END { for (key in table) { print key ": " table[key] } }' perf_log3 1>> bias_bench_log3 2>> bias_bench_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 perf record -d -e mem_inst_retired.all_loads:up -c 100000 ./four-loads-asm 1>> bias_bench_log4 2>> bias_bench_log4
	perf script -F time,ip,addr 1>> perf_log4 2>> perf_log4
	var1=$$(awk '/val:/ {print $$6}' bias_bench_log4) && awk -v pat="$$var1" '$$0 ~ pat {table[$$3]++;} END { for (key in table) { print key ": " table[key] } }' perf_log4 1>> bias_bench_log4 2>> bias_bench_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 perf record -d -e mem_inst_retired.all_loads:up -c 100000 ./four-loads-asm 1>> bias_bench_log5 2>> bias_bench_log5
	perf script -F time,ip,addr 1>> perf_log5 2>> perf_log5
	var1=$$(awk '/val:/ {print $$6}' bias_bench_log5) && awk -v pat="$$var1" '$$0 ~ pat {table[$$3]++;} END { for (key in table) { print key ": " table[key] } }' perf_log5 1>> bias_bench_log5 2>> bias_bench_log5

clean:
	rm perf.data*
	rm *_log* 
	rm four-loads-asm 
