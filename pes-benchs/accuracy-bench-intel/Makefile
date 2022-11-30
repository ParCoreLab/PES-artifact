all:	install cache-misses-run-5x cache-misses-perf-run-5x cache-misses-with-signal-perf-run-5x inst-perf-run-5x inst-with-signal-perf-run-5x thread-sensitivity

install:	cache-misses-install cache-misses-perf-install cache-misses-perf-with-signal-install inst-perf-install inst-perf-with-signal-install sampling-rate-sensitivity-install inst-perf-per100-thread-sensitivity cache-misses-perf-per100-thread-sensitivity

cache-misses-install:	cache_misses_asm_per20.c cache_misses_asm_per40.c cache_misses_asm_per60.c cache_misses_asm_per80.c cache_misses_asm_per100.c
	gcc cache_misses_asm_per20.c -o cache_misses_asm_per20 -fopenmp
	gcc cache_misses_asm_per40.c -o cache_misses_asm_per40 -fopenmp
	gcc cache_misses_asm_per60.c -o cache_misses_asm_per60 -fopenmp
	gcc cache_misses_asm_per80.c -o cache_misses_asm_per80 -fopenmp
	gcc cache_misses_asm_per100.c -o cache_misses_asm_per100 -fopenmp

cache-misses-perf-install:   cache_misses_asm_perf_per20.c cache_misses_asm_perf_per40.c cache_misses_asm_perf_per60.c cache_misses_asm_perf_per80.c cache_misses_asm_perf_per100.c
	gcc cache_misses_asm_perf_per20.c -o cache_misses_asm_perf_per20 -fopenmp
	gcc cache_misses_asm_perf_per40.c -o cache_misses_asm_perf_per40 -fopenmp
	gcc cache_misses_asm_perf_per60.c -o cache_misses_asm_perf_per60 -fopenmp
	gcc cache_misses_asm_perf_per80.c -o cache_misses_asm_perf_per80 -fopenmp
	gcc cache_misses_asm_perf_per100.c -o cache_misses_asm_perf_per100 -fopenmp

sampling-rate-sensitivity-install:   cache_misses_asm_perf_per20_1M.c cache_misses_asm_perf_per20.c cache_misses_asm_perf_per20_10K.c cache_misses_asm_perf_per20_1K.c cache_misses_asm_perf_per20_100.c
	gcc cache_misses_asm_perf_per20_1M.c -o cache_misses_asm_perf_per20_1M -fopenmp
	gcc cache_misses_asm_perf_per20.c -o cache_misses_asm_perf_per20 -fopenmp
	gcc cache_misses_asm_perf_per20_10K.c -o cache_misses_asm_perf_per20_10K -fopenmp
	gcc cache_misses_asm_perf_per20_1K.c -o cache_misses_asm_perf_per20_1K -fopenmp
	gcc cache_misses_asm_perf_per20_100.c -o cache_misses_asm_perf_per20_100 -fopenmp

inst-perf-install:   inst_asm_perf_per20.c inst_asm_perf_per40.c inst_asm_perf_per60.c inst_asm_perf_per80.c inst_asm_perf_per100.c
	gcc inst_asm_perf_per20.c -o inst_asm_perf_per20 -fopenmp
	gcc inst_asm_perf_per40.c -o inst_asm_perf_per40 -fopenmp
	gcc inst_asm_perf_per60.c -o inst_asm_perf_per60 -fopenmp
	gcc inst_asm_perf_per80.c -o inst_asm_perf_per80 -fopenmp
	gcc inst_asm_perf_per100.c -o inst_asm_perf_per100 -fopenmp

cache-misses-perf-with-signal-install:   cache_misses_asm_perf_per20_with_signal.c cache_misses_asm_perf_per40_with_signal.c cache_misses_asm_perf_per60_with_signal.c cache_misses_asm_perf_per80_with_signal.c cache_misses_asm_perf_per100_with_signal.c
	gcc cache_misses_asm_perf_per20_with_signal.c -o cache_misses_asm_perf_per20_with_signal -fopenmp
	gcc cache_misses_asm_perf_per40_with_signal.c -o cache_misses_asm_perf_per40_with_signal -fopenmp
	gcc cache_misses_asm_perf_per60_with_signal.c -o cache_misses_asm_perf_per60_with_signal -fopenmp
	gcc cache_misses_asm_perf_per80_with_signal.c -o cache_misses_asm_perf_per80_with_signal -fopenmp
	gcc cache_misses_asm_perf_per100_with_signal.c -o cache_misses_asm_perf_per100_with_signal -fopenmp

inst-perf-with-signal-install:   inst_asm_perf_per20_with_signal.c inst_asm_perf_per40_with_signal.c inst_asm_perf_per60_with_signal.c inst_asm_perf_per80_with_signal.c inst_asm_perf_per100_with_signal.c
	gcc inst_asm_perf_per20_with_signal.c -o inst_asm_perf_per20_with_signal -fopenmp
	gcc inst_asm_perf_per40_with_signal.c -o inst_asm_perf_per40_with_signal -fopenmp
	gcc inst_asm_perf_per60_with_signal.c -o inst_asm_perf_per60_with_signal -fopenmp
	gcc inst_asm_perf_per80_with_signal.c -o inst_asm_perf_per80_with_signal -fopenmp
	gcc inst_asm_perf_per100_with_signal.c -o inst_asm_perf_per100_with_signal -fopenmp

inst-perf-per100-thread-sensitivity:
	gcc inst_asm_perf_per100_thread_sensitivity.c -o inst_asm_perf_per100_thread_sensitivity -fopenmp

cache-misses-perf-per100-thread-sensitivity:
	gcc cache_misses_asm_perf_per100_thread_sensitivity.c -o cache_misses_asm_perf_per100_thread_sensitivity -fopenmp

cache-misses-per100-thread-sensitivity:
	gcc cache_misses_asm_per100_thread_sensitivity.c -o cache_misses_asm_per100_thread_sensitivity -fopenmp

cache-misses-run-5x: cache-misses-20-run-5x cache-misses-40-run-5x cache-misses-60-run-5x cache-misses-80-run-5x cache-misses-100-run-5x

cache-misses-run: cache-misses-20-run cache-misses-40-run cache-misses-60-run cache-misses-80-run cache-misses-100-run

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

thread-sensitivity:	original-thread-sensitivity cache-misses-thread-sensitivity inst-thread-sensitivity

original-thread-sensitivity:	1-thread-sensitivity-run-5x 2-thread-sensitivity-run-5x 4-thread-sensitivity-run-5x 8-thread-sensitivity-run-5x 16-thread-sensitivity-run-5x 32-thread-sensitivity-run-5x

1-thread-sensitivity-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee 1_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a thread_sensitivity_asm_per100_5x_log

2-thread-sensitivity-run-5x:
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee 2_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 2_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 2_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 2_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 2_thread_sensitivity_asm_per100_5x_log
	
4-thread-sensitivity-run-5x:	
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee 4_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 4_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 4_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 4_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 4_thread_sensitivity_asm_per100_5x_log

8-thread-sensitivity-run-5x:
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee 8_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 8_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 8_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 8_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 8_thread_sensitivity_asm_per100_5x_log

16-thread-sensitivity-run-5x:
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee 16_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 16_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 16_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 16_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 16_thread_sensitivity_asm_per100_5x_log

32-thread-sensitivity-run-5x:
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee 32_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 32_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 32_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 32_thread_sensitivity_asm_per100_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100 2>&1 | tee -a 32_thread_sensitivity_asm_per100_5x_log


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

cache-misses-perf-run-5x: cache-misses-20-perf-run-5x cache-misses-40-perf-run-5x cache-misses-60-perf-run-5x cache-misses-80-perf-run-5x cache-misses-100-perf-run-5x

cache-misses-perf-run: cache-misses-20-perf-run cache-misses-40-perf-run cache-misses-60-perf-run cache-misses-80-perf-run cache-misses-100-perf-run

cache-misses-20-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20 2>&1 | tee cache_misses_asm_perf_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20 2>&1 | tee -a cache_misses_asm_perf_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20 2>&1 | tee -a cache_misses_asm_perf_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20 2>&1 | tee -a cache_misses_asm_perf_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20 2>&1 | tee -a cache_misses_asm_perf_per20_5x_log

cache-misses-40-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per40 2>&1 | tee cache_misses_asm_perf_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per40 2>&1 | tee -a cache_misses_asm_perf_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per40 2>&1 | tee -a cache_misses_asm_perf_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per40 2>&1 | tee -a cache_misses_asm_perf_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per40 2>&1 | tee -a cache_misses_asm_perf_per40_5x_log


cache-misses-60-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per60 2>&1 | tee cache_misses_asm_perf_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per60 2>&1 | tee -a cache_misses_asm_perf_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per60 2>&1 | tee -a cache_misses_asm_perf_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per60 2>&1 | tee -a cache_misses_asm_perf_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per60 2>&1 | tee -a cache_misses_asm_perf_per60_5x_log

cache-misses-80-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per80 2>&1 | tee cache_misses_asm_perf_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per80 2>&1 | tee -a cache_misses_asm_perf_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per80 2>&1 | tee -a cache_misses_asm_perf_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per80 2>&1 | tee -a cache_misses_asm_perf_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per80 2>&1 | tee -a cache_misses_asm_perf_per80_5x_log

cache-misses-100-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100 2>&1 | tee cache_misses_asm_perf_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100 2>&1 | tee -a cache_misses_asm_perf_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100 2>&1 | tee -a cache_misses_asm_perf_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100 2>&1 | tee -a cache_misses_asm_perf_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100 2>&1 | tee -a cache_misses_asm_perf_per100_5x_log

cache-misses-thread-sensitivity:    1-cache-misses-thread-sensitivity-run-5x 2-cache-misses-thread-sensitivity-run-5x 4-cache-misses-thread-sensitivity-run-5x 8-cache-misses-thread-sensitivity-run-5x 16-cache-misses-thread-sensitivity-run-5x 32-cache-misses-thread-sensitivity-run-5x

cache-misses-thread-sensitivity-ori:    1-cache-misses-thread-sensitivity-ori-run-5x 2-cache-misses-thread-sensitivity-ori-run-5x 4-cache-misses-thread-sensitivity-ori-run-5x 8-cache-misses-thread-sensitivity-ori-run-5x 16-cache-misses-thread-sensitivity-ori-run-5x 32-cache-misses-thread-sensitivity-ori-run-5x

cache-misses-thread-sensitivity_single_run-ori:     1-cache-misses-thread-sensitivity-ori-run 2-cache-misses-thread-sensitivity-ori-run 4-cache-misses-thread-sensitivity-ori-run 8-cache-misses-thread-sensitivity-ori-run 16-cache-misses-thread-sensitivity-ori-run 32-cache-misses-thread-sensitivity-ori-run

1-cache-misses-thread-sensitivity-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee 1-cache_misses_thread_sensitivity_per100_log

1-cache-misses-thread-sensitivity-ori-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 1-cache_misses_thread_sensitivity_per100_ori_log

1-cache-misses-thread-sensitivity-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee 1-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 1-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 1-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 1-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 1-cache_misses_thread_sensitivity_per100_5x_log

1-cache-misses-thread-sensitivity-ori-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 1-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 1-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 1-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 1-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 1-cache_misses_thread_sensitivity_per100_5x_ori_log

2-cache-misses-thread-sensitivity-run:
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee 2-cache_misses_thread_sensitivity_per100_log

2-cache-misses-thread-sensitivity-ori-run:
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 2-cache_misses_thread_sensitivity_per100_ori_log

2-cache-misses-thread-sensitivity-run-5x:
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee 2-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 2-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 2-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 2-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 2-cache_misses_thread_sensitivity_per100_5x_log

2-cache-misses-thread-sensitivity-ori-run-5x:
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 2-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 2-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 2-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 2-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 2-cache_misses_thread_sensitivity_per100_5x_ori_log

4-cache-misses-thread-sensitivity-run:
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee 4-cache_misses_thread_sensitivity_per100_log

4-cache-misses-thread-sensitivity-ori-run:
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 4-cache_misses_thread_sensitivity_per100_ori_log

4-cache-misses-thread-sensitivity-run-5x:
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee 4-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 4-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 4-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 4-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 4-cache_misses_thread_sensitivity_per100_5x_log

4-cache-misses-thread-sensitivity-ori-run-5x:
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 4-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 4-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 4-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 4-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 4-cache_misses_thread_sensitivity_per100_5x_ori_log

8-cache-misses-thread-sensitivity-run:
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee 8-cache_misses_thread_sensitivity_per100_log

8-cache-misses-thread-sensitivity-ori-run:
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 8-cache_misses_thread_sensitivity_per100_ori_log

8-cache-misses-thread-sensitivity-run-5x:
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee 8-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 8-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 8-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 8-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 8-cache_misses_thread_sensitivity_per100_5x_log

8-cache-misses-thread-sensitivity-ori-run-5x:
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 8-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 8-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 8-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 8-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 8-cache_misses_thread_sensitivity_per100_5x_ori_log

16-cache-misses-thread-sensitivity-run:
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee 16-cache_misses_thread_sensitivity_per100_log

16-cache-misses-thread-sensitivity-ori-run:
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 16-cache_misses_thread_sensitivity_per100_ori_log

16-cache-misses-thread-sensitivity-run-5x:
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee 16-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 16-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 16-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 16-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 16-cache_misses_thread_sensitivity_per100_5x_log

16-cache-misses-thread-sensitivity-ori-run-5x:
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 16-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 16-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 16-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 16-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 16-cache_misses_thread_sensitivity_per100_5x_ori_log

32-cache-misses-thread-sensitivity-run:
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee 32-cache_misses_thread_sensitivity_per100_log

32-cache-misses-thread-sensitivity-ori-run:
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 32-cache_misses_thread_sensitivity_per100_ori_log

32-cache-misses-thread-sensitivity-run-5x:
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee 32-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 32-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 32-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 32-cache_misses_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 32-cache_misses_thread_sensitivity_per100_5x_log

32-cache-misses-thread-sensitivity-ori-run-5x:
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee 32-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 32-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 32-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 32-cache_misses_thread_sensitivity_per100_5x_ori_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_per100_thread_sensitivity 2>&1 | tee -a 32-cache_misses_thread_sensitivity_per100_5x_ori_log

cache-misses-20-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20 2>&1 | tee cache_misses_asm_perf_per20_log

cache-misses-40-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per40 2>&1 | tee cache_misses_asm_perf_per40_log

cache-misses-60-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per60 2>&1 | tee cache_misses_asm_perf_per60_log

cache-misses-80-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per80 2>&1 | tee cache_misses_asm_perf_per80_log

cache-misses-100-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100 2>&1 | tee cache_misses_asm_perf_per100_log

inst-perf-run-5x: inst-20-perf-run-5x inst-40-perf-run-5x inst-60-perf-run-5x inst-80-perf-run-5x inst-100-perf-run-5x

inst-perf-run: inst-20-perf-run inst-40-perf-run inst-60-perf-run inst-80-perf-run inst-100-perf-run

inst-20-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per20 2>&1 | tee inst_asm_perf_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per20 2>&1 | tee -a inst_asm_perf_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per20 2>&1 | tee -a inst_asm_perf_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per20 2>&1 | tee -a inst_asm_perf_per20_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per20 2>&1 | tee -a inst_asm_perf_per20_5x_log

inst-40-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per40 2>&1 | tee inst_asm_perf_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per40 2>&1 | tee -a inst_asm_perf_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per40 2>&1 | tee -a inst_asm_perf_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per40 2>&1 | tee -a inst_asm_perf_per40_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per40 2>&1 | tee -a inst_asm_perf_per40_5x_log

inst-60-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per60 2>&1 | tee inst_asm_perf_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per60 2>&1 | tee -a inst_asm_perf_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per60 2>&1 | tee -a inst_asm_perf_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per60 2>&1 | tee -a inst_asm_perf_per60_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per60 2>&1 | tee -a inst_asm_perf_per60_5x_log

inst-80-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per80 2>&1 | tee inst_asm_perf_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per80 2>&1 | tee -a inst_asm_perf_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per80 2>&1 | tee -a inst_asm_perf_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per80 2>&1 | tee -a inst_asm_perf_per80_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per80 2>&1 | tee -a inst_asm_perf_per80_5x_log

inst-100-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100 2>&1 | tee inst_asm_perf_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100 2>&1 | tee -a inst_asm_perf_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100 2>&1 | tee -a inst_asm_perf_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100 2>&1 | tee -a inst_asm_perf_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100 2>&1 | tee -a inst_asm_perf_per100_5x_log

inst-thread-sensitivity:    1-inst-thread-sensitivity-run-5x 2-inst-thread-sensitivity-run-5x 4-inst-thread-sensitivity-run-5x 8-inst-thread-sensitivity-run-5x 16-inst-thread-sensitivity-run-5x 32-inst-thread-sensitivity-run-5x

inst-thread-sensitivity_single_run:	1-inst-thread-sensitivity-run 2-inst-thread-sensitivity-run 4-inst-thread-sensitivity-run 8-inst-thread-sensitivity-run 16-inst-thread-sensitivity-run 32-inst-thread-sensitivity-run

1-inst-thread-sensitivity-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee 1_inst_thread_sensitivity_per100_log

1-inst-thread-sensitivity-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee 1_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 1_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 1_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 1_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 1_inst_thread_sensitivity_per100_5x_log

2-inst-thread-sensitivity-run:
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee 2_inst_thread_sensitivity_per100_log

2-inst-thread-sensitivity-run-5x:
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee 2_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 2_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 2_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 2_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=2 GOMP_CPU_AFFINITY="0 1" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 2_inst_thread_sensitivity_per100_5x_log

4-inst-thread-sensitivity-run:
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee 4_inst_thread_sensitivity_per100_log

4-inst-thread-sensitivity-run-5x:
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee 4_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 4_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 4_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 4_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=4 GOMP_CPU_AFFINITY="0 1 2 3" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 4_inst_thread_sensitivity_per100_5x_log

8-inst-thread-sensitivity-run:
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee 8_inst_thread_sensitivity_per100_log

8-inst-thread-sensitivity-run-5x:
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee 8_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 8_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 8_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 8_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=8 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 8_inst_thread_sensitivity_per100_5x_log

16-inst-thread-sensitivity-run:
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee 16_inst_thread_sensitivity_per100_log

16-inst-thread-sensitivity-run-5x:
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee 16_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 16_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 16_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 16_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=16 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 16_inst_thread_sensitivity_per100_5x_log

32-inst-thread-sensitivity-run:
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee 32_inst_thread_sensitivity_per100_log

32-inst-thread-sensitivity-run-5x:
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee 32_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 32_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 32_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 32_inst_thread_sensitivity_per100_5x_log
	OMP_NUM_THREADS=32 GOMP_CPU_AFFINITY="0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_thread_sensitivity 2>&1 | tee -a 32_inst_thread_sensitivity_per100_5x_log

inst-20-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per20 2>&1 | tee inst_asm_perf_per20_log

inst-40-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per40 2>&1 | tee inst_asm_perf_per40_log

inst-60-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per60 2>&1 | tee inst_asm_perf_per60_log

inst-80-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per80 2>&1 | tee inst_asm_perf_per80_log

inst-100-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100 2>&1 | tee inst_asm_perf_per100_log

cache-misses-with-signal-perf-run-5x: cache-misses-20-with-signal-perf-run-5x cache-misses-40-with-signal-perf-run-5x cache-misses-60-with-signal-perf-run-5x cache-misses-80-with-signal-perf-run-5x cache-misses-100-with-signal-perf-run-5x

cache-misses-with-signal-perf-run: cache-misses-20-with-signal-perf-run cache-misses-40-with-signal-perf-run cache-misses-60-with-signal-perf-run cache-misses-80-with-signal-perf-run cache-misses-100-with-signal-perf-run

cache-misses-20-with-signal-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_with_signal 2>&1 | tee cache_misses_asm_perf_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_with_signal 2>&1 | tee -a cache_misses_asm_perf_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_with_signal 2>&1 | tee -a cache_misses_asm_perf_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_with_signal 2>&1 | tee -a cache_misses_asm_perf_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_with_signal 2>&1 | tee -a cache_misses_asm_perf_per20_with_signal_5x_log

cache-misses-40-with-signal-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per40_with_signal 2>&1 | tee cache_misses_asm_perf_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per40_with_signal 2>&1 | tee -a cache_misses_asm_perf_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per40_with_signal 2>&1 | tee -a cache_misses_asm_perf_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per40_with_signal 2>&1 | tee -a cache_misses_asm_perf_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per40_with_signal 2>&1 | tee -a cache_misses_asm_perf_per40_with_signal_5x_log

cache-misses-60-with-signal-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per60_with_signal 2>&1 | tee cache_misses_asm_perf_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per60_with_signal 2>&1 | tee -a cache_misses_asm_perf_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per60_with_signal 2>&1 | tee -a cache_misses_asm_perf_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per60_with_signal 2>&1 | tee -a cache_misses_asm_perf_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per60_with_signal 2>&1 | tee -a cache_misses_asm_perf_per60_with_signal_5x_log

cache-misses-80-with-signal-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per80_with_signal 2>&1 | tee cache_misses_asm_perf_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per80_with_signal 2>&1 | tee -a cache_misses_asm_perf_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per80_with_signal 2>&1 | tee -a cache_misses_asm_perf_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per80_with_signal 2>&1 | tee -a cache_misses_asm_perf_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per80_with_signal 2>&1 | tee -a cache_misses_asm_perf_per80_with_signal_5x_log

cache-misses-100-with-signal-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_with_signal 2>&1 | tee cache_misses_asm_perf_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_with_signal 2>&1 | tee -a cache_misses_asm_perf_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_with_signal 2>&1 | tee -a cache_misses_asm_perf_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_with_signal 2>&1 | tee -a cache_misses_asm_perf_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_with_signal 2>&1 | tee -a cache_misses_asm_perf_per100_with_signal_5x_log


cache-misses-20-with-signal-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_with_signal 2>&1 | tee cache_misses_asm_perf_per20_with_signal_log

cache-misses-40-with-signal-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per40_with_signal 2>&1 | tee cache_misses_asm_perf_per40_with_signal_log

cache-misses-60-with-signal-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per60_with_signal 2>&1 | tee cache_misses_asm_perf_per60_with_signal_log

cache-misses-80-with-signal-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per80_with_signal 2>&1 | tee cache_misses_asm_perf_per80_with_signal_log

cache-misses-100-with-signal-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per100_with_signal 2>&1 | tee cache_misses_asm_perf_per100_with_signal_log


inst-with-signal-perf-run-5x: inst-20-with-signal-perf-run-5x inst-40-with-signal-perf-run-5x inst-60-with-signal-perf-run-5x inst-80-with-signal-perf-run-5x inst-100-with-signal-perf-run-5x

inst-with-signal-perf-run: inst-20-with-signal-perf-run inst-40-with-signal-perf-run inst-60-with-signal-perf-run inst-80-with-signal-perf-run inst-100-with-signal-perf-run

inst-20-with-signal-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per20_with_signal 2>&1 | tee inst_asm_perf_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per20_with_signal 2>&1 | tee -a inst_asm_perf_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per20_with_signal 2>&1 | tee -a inst_asm_perf_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per20_with_signal 2>&1 | tee -a inst_asm_perf_per20_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per20_with_signal 2>&1 | tee -a inst_asm_perf_per20_with_signal_5x_log

inst-40-with-signal-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per40_with_signal 2>&1 | tee inst_asm_perf_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per40_with_signal 2>&1 | tee -a inst_asm_perf_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per40_with_signal 2>&1 | tee -a inst_asm_perf_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per40_with_signal 2>&1 | tee -a inst_asm_perf_per40_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per40_with_signal 2>&1 | tee -a inst_asm_perf_per40_with_signal_5x_log

inst-60-with-signal-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per60_with_signal 2>&1 | tee inst_asm_perf_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per60_with_signal 2>&1 | tee -a inst_asm_perf_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per60_with_signal 2>&1 | tee -a inst_asm_perf_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per60_with_signal 2>&1 | tee -a inst_asm_perf_per60_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per60_with_signal 2>&1 | tee -a inst_asm_perf_per60_with_signal_5x_log

inst-80-with-signal-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per80_with_signal 2>&1 | tee inst_asm_perf_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per80_with_signal 2>&1 | tee -a inst_asm_perf_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per80_with_signal 2>&1 | tee -a inst_asm_perf_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per80_with_signal 2>&1 | tee -a inst_asm_perf_per80_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per80_with_signal 2>&1 | tee -a inst_asm_perf_per80_with_signal_5x_log

inst-100-with-signal-perf-run-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_with_signal 2>&1 | tee inst_asm_perf_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_with_signal 2>&1 | tee -a inst_asm_perf_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_with_signal 2>&1 | tee -a inst_asm_perf_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_with_signal 2>&1 | tee -a inst_asm_perf_per100_with_signal_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_with_signal 2>&1 | tee -a inst_asm_perf_per100_with_signal_5x_log

inst-20-with-signal-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per20_with_signal 2>&1 | tee inst_asm_perf_per20_with_signal_log

inst-40-with-signal-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per40_with_signal 2>&1 | tee inst_asm_perf_per40_with_signal_log

inst-60-with-signal-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per60_with_signal 2>&1 | tee inst_asm_perf_per60_with_signal_log

inst-80-with-signal-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per80_with_signal 2>&1 | tee inst_asm_perf_per80_with_signal_log

inst-100-with-signal-perf-run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./inst_asm_perf_per100_with_signal 2>&1 | tee inst_asm_perf_per100_with_signal_log

sampling-rate-sensitivity-5x: sampling-rate-1M-5x sampling-rate-100K-5x sampling-rate-10K-5x sampling-rate-1K-5x sampling-rate-100-5x

sampling-rate-sensitivity: sampling-rate-1M sampling-rate-100K sampling-rate-10K sampling-rate-1K sampling-rate-100

sampling-rate-1M-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_1M 2>&1 | tee sampling_rate_1M_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_1M 2>&1 | tee -a sampling_rate_1M_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_1M 2>&1 | tee -a sampling_rate_1M_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_1M 2>&1 | tee -a sampling_rate_1M_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_1M 2>&1 | tee -a sampling_rate_1M_5x_log

sampling-rate-1M:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_1M 2>&1 | tee sampling_rate_1M_log

sampling-rate-100K-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20 2>&1 | tee sampling_rate_100K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20 2>&1 | tee -a sampling_rate_100K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20 2>&1 | tee -a sampling_rate_100K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20 2>&1 | tee -a sampling_rate_100K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20 2>&1 | tee -a sampling_rate_100K_5x_log

sampling-rate-100K:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20 2>&1 | tee sampling_rate_100K_log

sampling-rate-10K-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_10K 2>&1 | tee sampling_rate_10K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_10K 2>&1 | tee -a sampling_rate_10K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_10K 2>&1 | tee -a sampling_rate_10K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_10K 2>&1 | tee -a sampling_rate_10K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_10K 2>&1 | tee -a sampling_rate_10K_5x_log

sampling-rate-10K:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_10K 2>&1 | tee sampling_rate_10K_log

sampling-rate-1K-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_1K 2>&1 | tee sampling_rate_1K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_1K 2>&1 | tee -a sampling_rate_1K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_1K 2>&1 | tee -a sampling_rate_1K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_1K 2>&1 | tee -a sampling_rate_1K_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_1K 2>&1 | tee -a sampling_rate_1K_5x_log

sampling-rate-1K:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_1K 2>&1 | tee sampling_rate_1K_log

sampling-rate-100-5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_100 2>&1 | tee sampling_rate_100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_100 2>&1 | tee -a sampling_rate_100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_100 2>&1 | tee -a sampling_rate_100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_100 2>&1 | tee -a sampling_rate_100_5x_log
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_100 2>&1 | tee -a sampling_rate_100_5x_log

sampling-rate-100:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./cache_misses_asm_perf_per20_100 2>&1 | tee sampling_rate_100_log

clean:
	rm cache_misses_asm_per20 cache_misses_asm_per40 cache_misses_asm_per60 cache_misses_asm_per80 cache_misses_asm_per100 cache_misses_asm_perf_per20 cache_misses_asm_perf_per40 cache_misses_asm_perf_per60 cache_misses_asm_perf_per80 cache_misses_asm_perf_per100 inst_asm_perf_per20 inst_asm_perf_per40 inst_asm_perf_per60 inst_asm_perf_per80 inst_asm_perf_per100 cache_misses_asm_perf_per20_with_signal cache_misses_asm_perf_per40_with_signal cache_misses_asm_perf_per60_with_signal cache_misses_asm_perf_per80_with_signal cache_misses_asm_perf_per100_with_signal inst_asm_perf_per20_with_signal inst_asm_perf_per40_with_signal inst_asm_perf_per60_with_signal inst_asm_perf_per80_with_signal inst_asm_perf_per100_with_signal cache_misses_asm_perf_per20_1M cache_misses_asm_perf_per20_10K cache_misses_asm_perf_per20_1K cache_misses_asm_perf_per20_100 cache_misses_asm_perf_per100_thread_sensitivity inst_asm_perf_per100_thread_sensitivity
