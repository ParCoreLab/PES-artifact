all:	cache-misses-install cache-misses-ibs-install cache-misses-ibs-with-signal-install op-ibs-install op-ibs-with-signal-install fetch-ibs-install fetch-ibs-with-signal-install cache-misses-ibs-per100-thread-sensitivity cache-misses-run-5x  cache-misses-ibs-run-5x cache-misses-with-signal-ibs-run-5x op-ibs-run-5x op-with-signal-ibs-run-5x fetch-ibs-run-5x fetch-with-signal-ibs-run-5x cache-misses-thread-sensitivity-5x-run

cache-misses-install:	cache_misses_asm_per20.c cache_misses_asm_per40.c cache_misses_asm_per60.c cache_misses_asm_per80.c cache_misses_asm_per100.c
	gcc cache_misses_asm_per20.c -o cache_misses_asm_per20 -fopenmp
	gcc cache_misses_asm_per40.c -o cache_misses_asm_per40 -fopenmp
	gcc cache_misses_asm_per60.c -o cache_misses_asm_per60 -fopenmp
	gcc cache_misses_asm_per80.c -o cache_misses_asm_per80 -fopenmp
	gcc cache_misses_asm_per100.c -o cache_misses_asm_per100 -fopenmp

cache-misses-ibs-install:   cache_misses_asm_ibs_per20.c cache_misses_asm_ibs_per40.c cache_misses_asm_ibs_per60.c cache_misses_asm_ibs_per80.c cache_misses_asm_ibs_per100.c
	gcc cache_misses_asm_ibs_per20.c cpu_check.c -o cache_misses_asm_ibs_per20 -fopenmp
	gcc cache_misses_asm_ibs_per40.c cpu_check.c -o cache_misses_asm_ibs_per40 -fopenmp
	gcc cache_misses_asm_ibs_per60.c cpu_check.c -o cache_misses_asm_ibs_per60 -fopenmp
	gcc cache_misses_asm_ibs_per80.c cpu_check.c -o cache_misses_asm_ibs_per80 -fopenmp
	gcc cache_misses_asm_ibs_per100.c cpu_check.c -o cache_misses_asm_ibs_per100 -fopenmp

op-ibs-install:   op_asm_ibs_per20.c op_asm_ibs_per40.c op_asm_ibs_per60.c op_asm_ibs_per80.c op_asm_ibs_per100.c
	gcc op_asm_ibs_per20.c cpu_check.c -o op_asm_ibs_per20 -fopenmp
	gcc op_asm_ibs_per40.c cpu_check.c -o op_asm_ibs_per40 -fopenmp
	gcc op_asm_ibs_per60.c cpu_check.c -o op_asm_ibs_per60 -fopenmp
	gcc op_asm_ibs_per80.c cpu_check.c -o op_asm_ibs_per80 -fopenmp
	gcc op_asm_ibs_per100.c cpu_check.c -o op_asm_ibs_per100 -fopenmp

cache-misses-ibs-with-signal-install:   cache_misses_asm_ibs_per20_with_signal.c cache_misses_asm_ibs_per40_with_signal.c cache_misses_asm_ibs_per60_with_signal.c cache_misses_asm_ibs_per80_with_signal.c cache_misses_asm_ibs_per100_with_signal.c
	gcc cache_misses_asm_ibs_per20_with_signal.c cpu_check.c -o cache_misses_asm_ibs_per20_with_signal -fopenmp
	gcc cache_misses_asm_ibs_per40_with_signal.c cpu_check.c -o cache_misses_asm_ibs_per40_with_signal -fopenmp
	gcc cache_misses_asm_ibs_per60_with_signal.c cpu_check.c -o cache_misses_asm_ibs_per60_with_signal -fopenmp
	gcc cache_misses_asm_ibs_per80_with_signal.c cpu_check.c -o cache_misses_asm_ibs_per80_with_signal -fopenmp
	gcc cache_misses_asm_ibs_per100_with_signal.c cpu_check.c -o cache_misses_asm_ibs_per100_with_signal -fopenmp

op-ibs-with-signal-install:   op_asm_ibs_per20_with_signal.c op_asm_ibs_per40_with_signal.c op_asm_ibs_per60_with_signal.c op_asm_ibs_per80_with_signal.c op_asm_ibs_per100_with_signal.c
	gcc op_asm_ibs_per20_with_signal.c cpu_check.c -o op_asm_ibs_per20_with_signal -fopenmp
	gcc op_asm_ibs_per40_with_signal.c cpu_check.c -o op_asm_ibs_per40_with_signal -fopenmp
	gcc op_asm_ibs_per60_with_signal.c cpu_check.c -o op_asm_ibs_per60_with_signal -fopenmp
	gcc op_asm_ibs_per80_with_signal.c cpu_check.c -o op_asm_ibs_per80_with_signal -fopenmp
	gcc op_asm_ibs_per100_with_signal.c cpu_check.c -o op_asm_ibs_per100_with_signal -fopenmp

fetch-ibs-install:   fetch_asm_ibs_per20.c fetch_asm_ibs_per40.c fetch_asm_ibs_per60.c fetch_asm_ibs_per80.c fetch_asm_ibs_per100.c
	gcc fetch_asm_ibs_per20.c cpu_check.c -o fetch_asm_ibs_per20 -fopenmp
	gcc fetch_asm_ibs_per40.c cpu_check.c -o fetch_asm_ibs_per40 -fopenmp
	gcc fetch_asm_ibs_per60.c cpu_check.c -o fetch_asm_ibs_per60 -fopenmp
	gcc fetch_asm_ibs_per80.c cpu_check.c -o fetch_asm_ibs_per80 -fopenmp
	gcc fetch_asm_ibs_per100.c cpu_check.c -o fetch_asm_ibs_per100 -fopenmp

fetch-ibs-with-signal-install:   fetch_asm_ibs_per20_with_signal.c fetch_asm_ibs_per40_with_signal.c fetch_asm_ibs_per60_with_signal.c fetch_asm_ibs_per80_with_signal.c fetch_asm_ibs_per100_with_signal.c
	gcc fetch_asm_ibs_per20_with_signal.c cpu_check.c -o fetch_asm_ibs_per20_with_signal -fopenmp
	gcc fetch_asm_ibs_per40_with_signal.c cpu_check.c -o fetch_asm_ibs_per40_with_signal -fopenmp
	gcc fetch_asm_ibs_per60_with_signal.c cpu_check.c -o fetch_asm_ibs_per60_with_signal -fopenmp
	gcc fetch_asm_ibs_per80_with_signal.c cpu_check.c -o fetch_asm_ibs_per80_with_signal -fopenmp
	gcc fetch_asm_ibs_per100_with_signal.c cpu_check.c -o fetch_asm_ibs_per100_with_signal -fopenmp

sampling-rate-sensitivity-install:   cache_misses_asm_ibs_per20_1M.c cache_misses_asm_ibs_per20.c cache_misses_asm_ibs_per20_10K.c cache_misses_asm_ibs_per20_1K.c cache_misses_asm_ibs_per20_100.c 
	gcc cache_misses_asm_ibs_per20_1M.c cpu_check.c -o cache_misses_asm_ibs_per20_1M -fopenmp
	gcc cache_misses_asm_ibs_per20.c cpu_check.c -o cache_misses_asm_ibs_per20 -fopenmp
	gcc cache_misses_asm_ibs_per20_10K.c cpu_check.c -o cache_misses_asm_ibs_per20_10K -fopenmp
	gcc cache_misses_asm_ibs_per20_1K.c cpu_check.c -o cache_misses_asm_ibs_per20_1K -fopenmp
	gcc cache_misses_asm_ibs_per20_100.c cpu_check.c -o cache_misses_asm_ibs_per20_100 -fopenmp

cache-misses-ibs-per100-thread-sensitivity:
	gcc cache_misses_asm_ibs_per100_thread_sensitivity.c cpu_check.c -o cache_misses_asm_ibs_per100_thread_sensitivity -fopenmp

op-ibs-per100-thread-sensitivity:
	gcc op_asm_ibs_per100_thread_sensitivity.c cpu_check.c -o op_asm_ibs_per100_thread_sensitivity -fopenmp

fetch-ibs-per100-thread-sensitivity:
	gcc fetch_asm_ibs_per100_thread_sensitivity.c cpu_check.c -o fetch_asm_ibs_per100_thread_sensitivity -fopenmp

cache-misses-per100-thread-sensitivity:
	gcc cache_misses_asm_per100_thread_sensitivity.c -o cache_misses_asm_per100_thread_sensitivity -fopenmp

cache-misses-run-5x: cache-misses-20-run-5x cache-misses-40-run-5x cache-misses-60-run-5x cache-misses-80-run-5x cache-misses-100-run-5x

cache-misses-run: cache-misses-20-run cache-misses-40-run cache-misses-60-run cache-misses-80-run cache-misses-100-run

cache-misses-thread-sensitivity-ori-run: 1-thread-cache-misses-100-ori-run-thread-sensitivity 2-thread-cache-misses-100-ori-run-thread-sensitivity 4-thread-cache-misses-100-ori-run-thread-sensitivity 8-thread-cache-misses-100-ori-run-thread-sensitivity 16-thread-cache-misses-100-ori-run-thread-sensitivity 32-thread-cache-misses-100-ori-run-thread-sensitivity

cache-misses-thread-sensitivity-run: 1-thread-cache-misses-100-run-thread-sensitivity 2-thread-cache-misses-100-run-thread-sensitivity 4-thread-cache-misses-100-run-thread-sensitivity 8-thread-cache-misses-100-run-thread-sensitivity 16-thread-cache-misses-100-run-thread-sensitivity 32-thread-cache-misses-100-run-thread-sensitivity

fetch-thread-sensitivity-run: 1-thread-fetch-100-run-thread-sensitivity 2-thread-fetch-100-run-thread-sensitivity 4-thread-fetch-100-run-thread-sensitivity 8-thread-fetch-100-run-thread-sensitivity 16-thread-fetch-100-run-thread-sensitivity 32-thread-fetch-100-run-thread-sensitivity

op-thread-sensitivity-run: 1-thread-op-100-run-thread-sensitivity 2-thread-op-100-run-thread-sensitivity 4-thread-op-100-run-thread-sensitivity 8-thread-op-100-run-thread-sensitivity 16-thread-op-100-run-thread-sensitivity 32-thread-op-100-run-thread-sensitivity

cache-misses-thread-sensitivity-5x-ori-run: 1-thread-cache-misses-100-ori-run-5x-thread-sensitivity 2-thread-cache-misses-100-ori-run-5x-thread-sensitivity 4-thread-cache-misses-100-ori-run-5x-thread-sensitivity 8-thread-cache-misses-100-ori-run-5x-thread-sensitivity 16-thread-cache-misses-100-ori-run-5x-thread-sensitivity 32-thread-cache-misses-100-ori-run-5x-thread-sensitivity

cache-misses-thread-sensitivity-5x-run: 1-thread-cache-misses-100-run-5x-thread-sensitivity 2-thread-cache-misses-100-run-5x-thread-sensitivity 4-thread-cache-misses-100-run-5x-thread-sensitivity 8-thread-cache-misses-100-run-5x-thread-sensitivity 16-thread-cache-misses-100-run-5x-thread-sensitivity 32-thread-cache-misses-100-run-5x-thread-sensitivity

op-thread-sensitivity-5x-run: 1-thread-op-100-run-5x-thread-sensitivity 2-thread-op-100-run-5x-thread-sensitivity 4-thread-op-100-run-5x-thread-sensitivity 8-thread-op-100-run-5x-thread-sensitivity 16-thread-op-100-run-5x-thread-sensitivity 32-thread-op-100-run-5x-thread-sensitivity

fetch-thread-sensitivity-5x-run: 1-thread-fetch-100-run-5x-thread-sensitivity 2-thread-fetch-100-run-5x-thread-sensitivity 4-thread-fetch-100-run-5x-thread-sensitivity 8-thread-fetch-100-run-5x-thread-sensitivity 16-thread-fetch-100-run-5x-thread-sensitivity 32-thread-fetch-100-run-5x-thread-sensitivity

cache-misses-20-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per20 2>&1 | tee cache_misses_asm_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per20 2>&1 | tee -a cache_misses_asm_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per20 2>&1 | tee -a cache_misses_asm_per20_5x_log	
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per20 2>&1 | tee -a cache_misses_asm_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per20 2>&1 | tee -a cache_misses_asm_per20_5x_log

cache-misses-40-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per40 2>&1 | tee cache_misses_asm_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per40 2>&1 | tee -a cache_misses_asm_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per40 2>&1 | tee -a cache_misses_asm_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per40 2>&1 | tee -a cache_misses_asm_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per40 2>&1 | tee -a cache_misses_asm_per40_5x_log

cache-misses-60-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per60 2>&1 | tee cache_misses_asm_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per60 2>&1 | tee -a cache_misses_asm_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per60 2>&1 | tee -a cache_misses_asm_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per60 2>&1 | tee -a cache_misses_asm_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per60 2>&1 | tee -a cache_misses_asm_per60_5x_log

cache-misses-80-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per80 2>&1 | tee cache_misses_asm_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per80 2>&1 | tee -a cache_misses_asm_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per80 2>&1 | tee -a cache_misses_asm_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per80 2>&1 | tee -a cache_misses_asm_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per80 2>&1 | tee -a cache_misses_asm_per80_5x_log

cache-misses-100-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee cache_misses_asm_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a cache_misses_asm_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a cache_misses_asm_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a cache_misses_asm_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a cache_misses_asm_per100_5x_log

1-thread-cache-misses-100-run-thread-sensitivity:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee 1_thread_cache_misses_per100_thread_sensitivity_log

1-thread-op-100-run-thread-sensitivity:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee 1_thread_op_per100_thread_sensitivity_log

1-thread-fetch-100-run-thread-sensitivity:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee 1_thread_fetch_per100_thread_sensitivity_log

1-thread-cache-misses-100-ori-run-thread-sensitivity:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 1_thread_cache_misses_per100_thread_sensitivity_ori_log

1-thread-cache-misses-100-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee 1_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 1_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 1_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 1_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 1_thread_cache_misses_per100_thread_sensitivity_5x_log

1-thread-op-100-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee 1_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 1_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 1_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 1_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 1_thread_op_per100_thread_sensitivity_5x_log

1-thread-fetch-100-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee 1_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 1_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 1_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 1_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 1_thread_fetch_per100_thread_sensitivity_5x_log



1-thread-cache-misses-100-ori-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 1_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 1_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 1_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 1_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 1_thread_cache_misses_per100_thread_sensitivity_5x_ori_log

2-thread-cache-misses-100-run-thread-sensitivity:
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee 2_thread_cache_misses_per100_thread_sensitivity_log

2-thread-op-100-run-thread-sensitivity:
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee 2_thread_op_per100_thread_sensitivity_log

2-thread-fetch-100-run-thread-sensitivity:
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee 2_thread_fetch_per100_thread_sensitivity_log



2-thread-cache-misses-100-ori-run-thread-sensitivity:
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 2_thread_cache_misses_per100_thread_sensitivity_ori_log

2-thread-cache-misses-100-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee 2_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 2_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 2_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 2_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 2_thread_cache_misses_per100_thread_sensitivity_5x_log

2-thread-op-100-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee 2_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 2_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 2_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 2_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 2_thread_op_per100_thread_sensitivity_5x_log

2-thread-fetch-100-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee 2_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 2_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 2_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 2_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 2_thread_fetch_per100_thread_sensitivity_5x_log



2-thread-cache-misses-100-ori-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 2_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 2_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 2_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 2_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 2_thread_cache_misses_per100_thread_sensitivity_5x_ori_log

4-thread-cache-misses-100-run-thread-sensitivity:
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee 4_thread_cache_misses_per100_thread_sensitivity_log

4-thread-op-100-run-thread-sensitivity:
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee 4_thread_op_per100_thread_sensitivity_log

4-thread-fetch-100-run-thread-sensitivity:
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee 4_thread_fetch_per100_thread_sensitivity_log



4-thread-cache-misses-100-ori-run-thread-sensitivity:
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 4_thread_cache_misses_per100_thread_sensitivity_ori_log

4-thread-cache-misses-100-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee 4_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 4_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 4_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 4_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 4_thread_cache_misses_per100_thread_sensitivity_5x_log

4-thread-op-100-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee 4_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 4_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 4_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 4_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 4_thread_op_per100_thread_sensitivity_5x_log

4-thread-fetch-100-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee 4_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 4_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 4_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 4_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 4_thread_fetch_per100_thread_sensitivity_5x_log



4-thread-cache-misses-100-ori-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 4_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 4_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 4_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 4_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 4_thread_cache_misses_per100_thread_sensitivity_5x_ori_log

8-thread-cache-misses-100-run-thread-sensitivity:
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee 8_thread_cache_misses_per100_thread_sensitivity_log

8-thread-op-100-run-thread-sensitivity:
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee 8_thread_op_per100_thread_sensitivity_log

8-thread-fetch-100-run-thread-sensitivity:
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee 8_thread_fetch_per100_thread_sensitivity_log



8-thread-cache-misses-100-ori-run-thread-sensitivity:
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 8_thread_cache_misses_per100_thread_sensitivity_ori_log

8-thread-cache-misses-100-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee 8_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 8_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 8_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 8_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 8_thread_cache_misses_per100_thread_sensitivity_5x_log

8-thread-op-100-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee 8_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 8_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 8_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 8_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 8_thread_op_per100_thread_sensitivity_5x_log

8-thread-fetch-100-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee 8_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 8_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 8_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 8_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 8_thread_fetch_per100_thread_sensitivity_5x_log



8-thread-cache-misses-100-ori-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 8_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 8_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 8_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 8_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 8_thread_cache_misses_per100_thread_sensitivity_5x_ori_log

16-thread-cache-misses-100-run-thread-sensitivity:
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee 16_thread_cache_misses_per100_thread_sensitivity_log

16-thread-op-100-run-thread-sensitivity:
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee 16_thread_op_per100_thread_sensitivity_log

16-thread-fetch-100-run-thread-sensitivity:
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee 16_thread_fetch_per100_thread_sensitivity_log



16-thread-cache-misses-100-ori-run-thread-sensitivity:
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 16_thread_cache_misses_per100_thread_sensitivity_ori_log

16-thread-cache-misses-100-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee 16_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 16_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 16_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 16_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 16_thread_cache_misses_per100_thread_sensitivity_5x_log

16-thread-op-100-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee 16_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 16_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 16_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 16_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 16_thread_op_per100_thread_sensitivity_5x_log

16-thread-fetch-100-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee 16_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 16_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 16_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 16_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 16_thread_fetch_per100_thread_sensitivity_5x_log


16-thread-cache-misses-100-ori-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 16_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 16_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 16_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 16_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 16_thread_cache_misses_per100_thread_sensitivity_5x_ori_log

32-thread-cache-misses-100-run-thread-sensitivity:
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee 32_thread_cache_misses_per100_thread_sensitivity_log

32-thread-op-100-run-thread-sensitivity:
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee 32_thread_op_per100_thread_sensitivity_log

32-thread-fetch-100-run-thread-sensitivity:
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee 32_thread_fetch_per100_thread_sensitivity_log



32-thread-cache-misses-100-ori-run-thread-sensitivity:
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 32_thread_cache_misses_per100_thread_sensitivity_ori_log

32-thread-cache-misses-100-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee 32_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 32_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 32_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 32_thread_cache_misses_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 32_thread_cache_misses_per100_thread_sensitivity_5x_log


32-thread-op-100-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee 32_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 32_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 32_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 32_thread_op_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 32_thread_op_per100_thread_sensitivity_5x_log


32-thread-fetch-100-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee 32_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 32_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 32_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 32_thread_fetch_per100_thread_sensitivity_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_thread_sensitivity 2>&1 | tee -a 32_thread_fetch_per100_thread_sensitivity_5x_log



32-thread-cache-misses-100-ori-run-5x-thread-sensitivity:
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 32_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 32_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 32_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 32_thread_cache_misses_per100_thread_sensitivity_5x_ori_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 32_thread_cache_misses_per100_thread_sensitivity_5x_ori_log

cache-misses-20-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per20 2>&1 | tee cache_misses_asm_per20_log
	
cache-misses-40-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per40 2>&1 | tee cache_misses_asm_per40_log

cache-misses-60-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per60 2>&1 | tee cache_misses_asm_per60_log

cache-misses-80-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per80 2>&1 | tee cache_misses_asm_per80_log

cache-misses-100-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee cache_misses_asm_per100_log

cache-misses-ibs-run-5x: cache-misses-20-ibs-run-5x cache-misses-40-ibs-run-5x cache-misses-60-ibs-run-5x cache-misses-80-ibs-run-5x cache-misses-100-ibs-run-5x

cache-misses-ibs-run: cache-misses-20-ibs-run cache-misses-40-ibs-run cache-misses-60-ibs-run cache-misses-80-ibs-run cache-misses-100-ibs-run

cache-misses-20-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20 2>&1 | tee cache_misses_asm_ibs_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20 2>&1 | tee -a cache_misses_asm_ibs_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20 2>&1 | tee -a cache_misses_asm_ibs_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20 2>&1 | tee -a cache_misses_asm_ibs_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20 2>&1 | tee -a cache_misses_asm_ibs_per20_5x_log

cache-misses-40-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per40 2>&1 | tee cache_misses_asm_ibs_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per40 2>&1 | tee -a cache_misses_asm_ibs_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per40 2>&1 | tee -a cache_misses_asm_ibs_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per40 2>&1 | tee -a cache_misses_asm_ibs_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per40 2>&1 | tee -a cache_misses_asm_ibs_per40_5x_log


cache-misses-60-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per60 2>&1 | tee cache_misses_asm_ibs_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per60 2>&1 | tee -a cache_misses_asm_ibs_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per60 2>&1 | tee -a cache_misses_asm_ibs_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per60 2>&1 | tee -a cache_misses_asm_ibs_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per60 2>&1 | tee -a cache_misses_asm_ibs_per60_5x_log

cache-misses-80-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per80 2>&1 | tee cache_misses_asm_ibs_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per80 2>&1 | tee -a cache_misses_asm_ibs_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per80 2>&1 | tee -a cache_misses_asm_ibs_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per80 2>&1 | tee -a cache_misses_asm_ibs_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per80 2>&1 | tee -a cache_misses_asm_ibs_per80_5x_log

cache-misses-100-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100 2>&1 | tee cache_misses_asm_ibs_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100 2>&1 | tee -a cache_misses_asm_ibs_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100 2>&1 | tee -a cache_misses_asm_ibs_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100 2>&1 | tee -a cache_misses_asm_ibs_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100 2>&1 | tee -a cache_misses_asm_ibs_per100_5x_log

cache-misses-20-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20 2>&1 | tee cache_misses_asm_ibs_per20_log

cache-misses-40-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per40 2>&1 | tee cache_misses_asm_ibs_per40_log

cache-misses-60-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per60 2>&1 | tee cache_misses_asm_ibs_per60_log

cache-misses-80-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per80 2>&1 | tee cache_misses_asm_ibs_per80_log

cache-misses-100-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100 2>&1 | tee cache_misses_asm_ibs_per100_log

op-ibs-run-5x: op-20-ibs-run-5x op-40-ibs-run-5x op-60-ibs-run-5x op-80-ibs-run-5x op-100-ibs-run-5x

op-ibs-run: op-20-ibs-run op-40-ibs-run op-60-ibs-run op-80-ibs-run op-100-ibs-run

op-20-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per20 2>&1 | tee op_asm_ibs_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per20 2>&1 | tee -a op_asm_ibs_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per20 2>&1 | tee -a op_asm_ibs_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per20 2>&1 | tee -a op_asm_ibs_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per20 2>&1 | tee -a op_asm_ibs_per20_5x_log

op-40-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per40 2>&1 | tee op_asm_ibs_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per40 2>&1 | tee -a op_asm_ibs_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per40 2>&1 | tee -a op_asm_ibs_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per40 2>&1 | tee -a op_asm_ibs_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per40 2>&1 | tee -a op_asm_ibs_per40_5x_log

op-60-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per60 2>&1 | tee op_asm_ibs_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per60 2>&1 | tee -a op_asm_ibs_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per60 2>&1 | tee -a op_asm_ibs_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per60 2>&1 | tee -a op_asm_ibs_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per60 2>&1 | tee -a op_asm_ibs_per60_5x_log

op-80-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per80 2>&1 | tee op_asm_ibs_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per80 2>&1 | tee -a op_asm_ibs_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per80 2>&1 | tee -a op_asm_ibs_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per80 2>&1 | tee -a op_asm_ibs_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per80 2>&1 | tee -a op_asm_ibs_per80_5x_log

op-100-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100 2>&1 | tee op_asm_ibs_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100 2>&1 | tee -a op_asm_ibs_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100 2>&1 | tee -a op_asm_ibs_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100 2>&1 | tee -a op_asm_ibs_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100 2>&1 | tee -a op_asm_ibs_per100_5x_log

op-20-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per20 2>&1 | tee op_asm_ibs_per20_log

op-40-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per40 2>&1 | tee op_asm_ibs_per40_log

op-60-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per60 2>&1 | tee op_asm_ibs_per60_log

op-80-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per80 2>&1 | tee op_asm_ibs_per80_log

op-100-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100 2>&1 | tee op_asm_ibs_per100_log

cache-misses-with-signal-ibs-run-5x: cache-misses-20-with-signal-ibs-run-5x cache-misses-40-with-signal-ibs-run-5x cache-misses-60-with-signal-ibs-run-5x cache-misses-80-with-signal-ibs-run-5x cache-misses-100-with-signal-ibs-run-5x

cache-misses-with-signal-ibs-run: cache-misses-20-with-signal-ibs-run cache-misses-40-with-signal-ibs-run cache-misses-60-with-signal-ibs-run cache-misses-80-with-signal-ibs-run cache-misses-100-with-signal-ibs-run

cache-misses-20-with-signal-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_with_signal 2>&1 | tee cache_misses_asm_ibs_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per20_with_signal_5x_log

cache-misses-40-with-signal-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per40_with_signal 2>&1 | tee cache_misses_asm_ibs_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per40_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per40_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per40_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per40_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per40_with_signal_5x_log

cache-misses-60-with-signal-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per60_with_signal 2>&1 | tee cache_misses_asm_ibs_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per60_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per60_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per60_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per60_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per60_with_signal_5x_log

cache-misses-80-with-signal-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per80_with_signal 2>&1 | tee cache_misses_asm_ibs_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per80_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per80_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per80_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per80_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per80_with_signal_5x_log

cache-misses-100-with-signal-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_with_signal 2>&1 | tee cache_misses_asm_ibs_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_with_signal 2>&1 | tee -a cache_misses_asm_ibs_per100_with_signal_5x_log


cache-misses-20-with-signal-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_with_signal 2>&1 | tee cache_misses_asm_ibs_per20_with_signal_log

cache-misses-40-with-signal-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per40_with_signal 2>&1 | tee cache_misses_asm_ibs_per40_with_signal_log

cache-misses-60-with-signal-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per60_with_signal 2>&1 | tee cache_misses_asm_ibs_per60_with_signal_log

cache-misses-80-with-signal-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per80_with_signal 2>&1 | tee cache_misses_asm_ibs_per80_with_signal_log

cache-misses-100-with-signal-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per100_with_signal 2>&1 | tee cache_misses_asm_ibs_per100_with_signal_log


op-with-signal-ibs-run-5x: op-20-with-signal-ibs-run-5x op-40-with-signal-ibs-run-5x op-60-with-signal-ibs-run-5x op-80-with-signal-ibs-run-5x op-100-with-signal-ibs-run-5x

op-with-signal-ibs-run: op-20-with-signal-ibs-run op-40-with-signal-ibs-run op-60-with-signal-ibs-run op-80-with-signal-ibs-run op-100-with-signal-ibs-run

op-20-with-signal-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per20_with_signal 2>&1 | tee op_asm_ibs_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per20_with_signal 2>&1 | tee -a op_asm_ibs_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per20_with_signal 2>&1 | tee -a op_asm_ibs_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per20_with_signal 2>&1 | tee -a op_asm_ibs_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per20_with_signal 2>&1 | tee -a op_asm_ibs_per20_with_signal_5x_log

op-40-with-signal-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per40_with_signal 2>&1 | tee op_asm_ibs_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per40_with_signal 2>&1 | tee -a op_asm_ibs_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per40_with_signal 2>&1 | tee -a op_asm_ibs_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per40_with_signal 2>&1 | tee -a op_asm_ibs_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per40_with_signal 2>&1 | tee -a op_asm_ibs_per40_with_signal_5x_log

op-60-with-signal-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per60_with_signal 2>&1 | tee op_asm_ibs_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per60_with_signal 2>&1 | tee -a op_asm_ibs_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per60_with_signal 2>&1 | tee -a op_asm_ibs_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per60_with_signal 2>&1 | tee -a op_asm_ibs_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per60_with_signal 2>&1 | tee -a op_asm_ibs_per60_with_signal_5x_log

op-80-with-signal-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per80_with_signal 2>&1 | tee op_asm_ibs_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per80_with_signal 2>&1 | tee -a op_asm_ibs_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per80_with_signal 2>&1 | tee -a op_asm_ibs_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per80_with_signal 2>&1 | tee -a op_asm_ibs_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per80_with_signal 2>&1 | tee -a op_asm_ibs_per80_with_signal_5x_log

op-100-with-signal-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_with_signal 2>&1 | tee op_asm_ibs_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_with_signal 2>&1 | tee -a op_asm_ibs_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_with_signal 2>&1 | tee -a op_asm_ibs_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_with_signal 2>&1 | tee -a op_asm_ibs_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_with_signal 2>&1 | tee -a op_asm_ibs_per100_with_signal_5x_log

op-20-with-signal-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per20_with_signal 2>&1 | tee op_asm_ibs_per20_with_signal_log

op-40-with-signal-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per40_with_signal 2>&1 | tee op_asm_ibs_per40_with_signal_log

op-60-with-signal-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per60_with_signal 2>&1 | tee op_asm_ibs_per60_with_signal_log

op-80-with-signal-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per80_with_signal 2>&1 | tee op_asm_ibs_per80_with_signal_log

op-100-with-signal-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./op_asm_ibs_per100_with_signal 2>&1 | tee op_asm_ibs_per100_with_signal_log

fetch-ibs-run-5x: fetch-20-ibs-run-5x fetch-40-ibs-run-5x fetch-60-ibs-run-5x fetch-80-ibs-run-5x fetch-100-ibs-run-5x

fetch-ibs-run: fetch-20-ibs-run fetch-40-ibs-run fetch-60-ibs-run fetch-80-ibs-run fetch-100-ibs-run

fetch-20-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per20 2>&1 | tee fetch_asm_ibs_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per20 2>&1 | tee -a fetch_asm_ibs_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per20 2>&1 | tee -a fetch_asm_ibs_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per20 2>&1 | tee -a fetch_asm_ibs_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per20 2>&1 | tee -a fetch_asm_ibs_per20_5x_log

fetch-40-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per40 2>&1 | tee fetch_asm_ibs_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per40 2>&1 | tee -a fetch_asm_ibs_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per40 2>&1 | tee -a fetch_asm_ibs_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per40 2>&1 | tee -a fetch_asm_ibs_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per40 2>&1 | tee -a fetch_asm_ibs_per40_5x_log

fetch-60-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per60 2>&1 | tee fetch_asm_ibs_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per60 2>&1 | tee -a fetch_asm_ibs_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per60 2>&1 | tee -a fetch_asm_ibs_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per60 2>&1 | tee -a fetch_asm_ibs_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per60 2>&1 | tee -a fetch_asm_ibs_per60_5x_log

fetch-80-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per80 2>&1 | tee fetch_asm_ibs_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per80 2>&1 | tee -a fetch_asm_ibs_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per80 2>&1 | tee -a fetch_asm_ibs_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per80 2>&1 | tee -a fetch_asm_ibs_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per80 2>&1 | tee -a fetch_asm_ibs_per80_5x_log

fetch-100-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100 2>&1 | tee fetch_asm_ibs_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100 2>&1 | tee -a fetch_asm_ibs_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100 2>&1 | tee -a fetch_asm_ibs_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100 2>&1 | tee -a fetch_asm_ibs_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100 2>&1 | tee -a fetch_asm_ibs_per100_5x_log

fetch-20-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per20 2>&1 | tee fetch_asm_ibs_per20_log

fetch-40-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per40 2>&1 | tee fetch_asm_ibs_per40_log

fetch-60-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per60 2>&1 | tee fetch_asm_ibs_per60_log

fetch-80-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per80 2>&1 | tee fetch_asm_ibs_per80_log

fetch-100-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100 2>&1 | tee fetch_asm_ibs_per100_log

fetch-with-signal-ibs-run-5x: fetch-20-with-signal-ibs-run-5x fetch-40-with-signal-ibs-run-5x fetch-60-with-signal-ibs-run-5x fetch-80-with-signal-ibs-run-5x fetch-100-with-signal-ibs-run-5x

fetch-with-signal-ibs-run: fetch-20-with-signal-ibs-run fetch-40-with-signal-ibs-run fetch-60-with-signal-ibs-run fetch-80-with-signal-ibs-run fetch-100-with-signal-ibs-run
fetch-20-with-signal-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per20_with_signal 2>&1 | tee fetch_asm_ibs_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per20_with_signal 2>&1 | tee -a fetch_asm_ibs_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per20_with_signal 2>&1 | tee -a fetch_asm_ibs_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per20_with_signal 2>&1 | tee -a fetch_asm_ibs_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per20_with_signal 2>&1 | tee -a fetch_asm_ibs_per20_with_signal_5x_log

fetch-40-with-signal-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per40_with_signal 2>&1 | tee fetch_asm_ibs_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per40_with_signal 2>&1 | tee -a fetch_asm_ibs_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per40_with_signal 2>&1 | tee -a fetch_asm_ibs_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per40_with_signal 2>&1 | tee -a fetch_asm_ibs_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per40_with_signal 2>&1 | tee -a fetch_asm_ibs_per40_with_signal_5x_log

fetch-60-with-signal-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per60_with_signal 2>&1 | tee fetch_asm_ibs_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per60_with_signal 2>&1 | tee -a fetch_asm_ibs_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per60_with_signal 2>&1 | tee -a fetch_asm_ibs_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per60_with_signal 2>&1 | tee -a fetch_asm_ibs_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per60_with_signal 2>&1 | tee -a fetch_asm_ibs_per60_with_signal_5x_log

fetch-80-with-signal-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per80_with_signal 2>&1 | tee fetch_asm_ibs_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per80_with_signal 2>&1 | tee -a fetch_asm_ibs_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per80_with_signal 2>&1 | tee -a fetch_asm_ibs_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per80_with_signal 2>&1 | tee -a fetch_asm_ibs_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per80_with_signal 2>&1 | tee -a fetch_asm_ibs_per80_with_signal_5x_log

fetch-100-with-signal-ibs-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_with_signal 2>&1 | tee fetch_asm_ibs_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_with_signal 2>&1 | tee -a fetch_asm_ibs_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_with_signal 2>&1 | tee -a fetch_asm_ibs_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_with_signal 2>&1 | tee -a fetch_asm_ibs_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_with_signal 2>&1 | tee -a fetch_asm_ibs_per100_with_signal_5x_log

fetch-20-with-signal-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per20_with_signal 2>&1 | tee fetch_asm_ibs_per20_with_signal_log

fetch-40-with-signal-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per40_with_signal 2>&1 | tee fetch_asm_ibs_per40_with_signal_log

fetch-60-with-signal-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per60_with_signal 2>&1 | tee fetch_asm_ibs_per60_with_signal_log

fetch-80-with-signal-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per80_with_signal 2>&1 | tee fetch_asm_ibs_per80_with_signal_log

fetch-100-with-signal-ibs-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./fetch_asm_ibs_per100_with_signal 2>&1 | tee fetch_asm_ibs_per100_with_signal_log


sampling-rate-sensitivity-5x: sampling-rate-1M-5x sampling-rate-100K-5x sampling-rate-10K-5x sampling-rate-1K-5x sampling-rate-100-5x

sampling-rate-sensitivity: sampling-rate-1M sampling-rate-100K sampling-rate-10K sampling-rate-1K sampling-rate-100

sampling-rate-1M-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_1M 2>&1 | tee sampling_rate_1M_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_1M 2>&1 | tee -a sampling_rate_1M_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_1M 2>&1 | tee -a sampling_rate_1M_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_1M 2>&1 | tee -a sampling_rate_1M_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_1M 2>&1 | tee -a sampling_rate_1M_5x_log

sampling-rate-1M:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_1M 2>&1 | tee sampling_rate_1M_log

sampling-rate-100K-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20 2>&1 | tee sampling_rate_100K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20 2>&1 | tee -a sampling_rate_100K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20 2>&1 | tee -a sampling_rate_100K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20 2>&1 | tee -a sampling_rate_100K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20 2>&1 | tee -a sampling_rate_100K_5x_log

sampling-rate-100K:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20 2>&1 | tee sampling_rate_100K_log

sampling-rate-10K-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_10K 2>&1 | tee sampling_rate_10K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_10K 2>&1 | tee -a sampling_rate_10K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_10K 2>&1 | tee -a sampling_rate_10K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_10K 2>&1 | tee -a sampling_rate_10K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_10K 2>&1 | tee -a sampling_rate_10K_5x_log

sampling-rate-10K:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_10K 2>&1 | tee sampling_rate_10K_log

sampling-rate-1K-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_1K 2>&1 | tee sampling_rate_1K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_1K 2>&1 | tee -a sampling_rate_1K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_1K 2>&1 | tee -a sampling_rate_1K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_1K 2>&1 | tee -a sampling_rate_1K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_1K 2>&1 | tee -a sampling_rate_1K_5x_log

sampling-rate-1K:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_1K 2>&1 | tee sampling_rate_1K_log

sampling-rate-100-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_100 2>&1 | tee sampling_rate_100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_100 2>&1 | tee -a sampling_rate_100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_100 2>&1 | tee -a sampling_rate_100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_100 2>&1 | tee -a sampling_rate_100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_100 2>&1 | tee -a sampling_rate_100_5x_log

sampling-rate-100:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_ibs_per20_100 2>&1 | tee sampling_rate_100_log

clean:
	rm cache_misses_asm_per20 cache_misses_asm_per40 cache_misses_asm_per60 cache_misses_asm_per80 cache_misses_asm_per100 cache_misses_asm_ibs_per20 cache_misses_asm_ibs_per40 cache_misses_asm_ibs_per60 cache_misses_asm_ibs_per80 cache_misses_asm_ibs_per100 op_asm_ibs_per20 op_asm_ibs_per40 op_asm_ibs_per60 op_asm_ibs_per80 op_asm_ibs_per100 cache_misses_asm_ibs_per20_with_signal cache_misses_asm_ibs_per40_with_signal cache_misses_asm_ibs_per60_with_signal cache_misses_asm_ibs_per80_with_signal cache_misses_asm_ibs_per100_with_signal op_asm_ibs_per20_with_signal op_asm_ibs_per40_with_signal op_asm_ibs_per60_with_signal op_asm_ibs_per80_with_signal op_asm_ibs_per100_with_signal fetch_asm_ibs_per20 fetch_asm_ibs_per40 fetch_asm_ibs_per60 fetch_asm_ibs_per80 fetch_asm_ibs_per100 fetch_asm_ibs_per20_with_signal fetch_asm_ibs_per40_with_signal fetch_asm_ibs_per60_with_signal fetch_asm_ibs_per80_with_signal fetch_asm_ibs_per100_with_signal cache_misses_asm_ibs_per20_1M cache_misses_asm_ibs_per20 cache_misses_asm_ibs_per20_10K cache_misses_asm_ibs_per20_1K cache_misses_asm_ibs_per20_100 cache_misses_asm_ibs_per100_thread_sensitivity
