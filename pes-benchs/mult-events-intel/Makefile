
install:
	gcc mult-events.c -o mult-events -fopenmp

run5x:	run5x_1event run5x_4events run5x_5events run5x_6events

run5x_1event:
	echo "1 event"
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_loads:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_loads:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_loads:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_loads:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_loads:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log	
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_stores:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_stores:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_stores:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_stores:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_stores:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e br_inst_retired.all_branches_pebs:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e br_inst_retired.all_branches_pebs:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e br_inst_retired.all_branches_pebs:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e br_inst_retired.all_branches_pebs:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e br_inst_retired.all_branches_pebs:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e br_inst_retired.near_taken:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e br_inst_retired.near_taken:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e br_inst_retired.near_taken:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e br_inst_retired.near_taken:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e br_inst_retired.near_taken:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.lock_loads:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.lock_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.lock_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.lock_loads:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.lock_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.lock_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.lock_loads:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.lock_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.lock_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.lock_loads:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.lock_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.lock_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.lock_loads:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.lock_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.lock_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e br_inst_retired.near_return:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_return" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_return" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e br_inst_retired.near_return:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_return" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_return" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e br_inst_retired.near_return:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_return" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_return" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e br_inst_retired.near_return:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_return" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_return" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e br_inst_retired.near_return:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_return" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_return" | wc -l 1>> mult_events_log 2>> mult_events_log	

run5x_4events:
	echo "4 events"
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_loads:up -c 100000 -e mem_inst_retired.all_stores:up -c 100000 -e br_inst_retired.all_branches_pebs:up -c 100000 -e br_inst_retired.near_taken:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_loads:up -c 100000 -e mem_inst_retired.all_stores:up -c 100000 -e br_inst_retired.all_branches_pebs:up -c 100000 -e br_inst_retired.near_taken:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log	
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_loads:up -c 100000 -e mem_inst_retired.all_stores:up -c 100000 -e br_inst_retired.all_branches_pebs:up -c 100000 -e br_inst_retired.near_taken:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_loads:up -c 100000 -e mem_inst_retired.all_stores:up -c 100000 -e br_inst_retired.all_branches_pebs:up -c 100000 -e br_inst_retired.near_taken:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log		
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_loads:up -c 100000 -e mem_inst_retired.all_stores:up -c 100000 -e br_inst_retired.all_branches_pebs:up -c 100000 -e br_inst_retired.near_taken:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log

run5x_5events:
	echo "5 events"
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_loads:up -c 100000 -e mem_inst_retired.all_stores:up -c 100000 -e br_inst_retired.all_branches_pebs:up -c 100000 -e br_inst_retired.near_taken:up -c 100000 -e mem_inst_retired.lock_loads:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.lock_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.lock_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_loads:up -c 100000 -e mem_inst_retired.all_stores:up -c 100000 -e br_inst_retired.all_branches_pebs:up -c 100000 -e br_inst_retired.near_taken:up -c 100000 -e mem_inst_retired.lock_loads:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.lock_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.lock_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_loads:up -c 100000 -e mem_inst_retired.all_stores:up -c 100000 -e br_inst_retired.all_branches_pebs:up -c 100000 -e br_inst_retired.near_taken:up -c 100000 -e mem_inst_retired.lock_loads:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.lock_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.lock_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_loads:up -c 100000 -e mem_inst_retired.all_stores:up -c 100000 -e br_inst_retired.all_branches_pebs:up -c 100000 -e br_inst_retired.near_taken:up -c 100000 -e mem_inst_retired.lock_loads:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.lock_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.lock_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_loads:up -c 100000 -e mem_inst_retired.all_stores:up -c 100000 -e br_inst_retired.all_branches_pebs:up -c 100000 -e br_inst_retired.near_taken:up -c 100000 -e mem_inst_retired.lock_loads:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.lock_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.lock_loads" | wc -l 1>> mult_events_log 2>> mult_events_log

run5x_6events:
	echo "6 events"
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  perf record -e mem_inst_retired.all_loads:up -c 100000 -e mem_inst_retired.all_stores:up -c 100000 -e br_inst_retired.all_branches_pebs:up -c 100000 -e br_inst_retired.near_taken:up -c 100000 -e mem_inst_retired.lock_loads:up -c 100000 -e br_inst_retired.near_return:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.lock_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.lock_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_return" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_return" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 perf record -e mem_inst_retired.all_loads:up -c 100000 -e mem_inst_retired.all_stores:up -c 100000 -e br_inst_retired.all_branches_pebs:up -c 100000 -e br_inst_retired.near_taken:up -c 100000 -e mem_inst_retired.lock_loads:up -c 100000 -e br_inst_retired.near_return:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.lock_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.lock_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_return" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_return" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 perf record -e mem_inst_retired.all_loads:up -c 100000 -e mem_inst_retired.all_stores:up -c 100000 -e br_inst_retired.all_branches_pebs:up -c 100000 -e br_inst_retired.near_taken:up -c 100000 -e mem_inst_retired.lock_loads:up -c 100000 -e br_inst_retired.near_return:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.lock_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.lock_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_return" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_return" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 perf record -e mem_inst_retired.all_loads:up -c 100000 -e mem_inst_retired.all_stores:up -c 100000 -e br_inst_retired.all_branches_pebs:up -c 100000 -e br_inst_retired.near_taken:up -c 100000 -e mem_inst_retired.lock_loads:up -c 100000 -e br_inst_retired.near_return:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.lock_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.lock_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_return" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_return" | wc -l 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 perf record -e mem_inst_retired.all_loads:up -c 100000 -e mem_inst_retired.all_stores:up -c 100000 -e br_inst_retired.all_branches_pebs:up -c 100000 -e br_inst_retired.near_taken:up -c 100000 -e mem_inst_retired.lock_loads:up -c 100000 -e br_inst_retired.near_return:up -c 100000 ./mult-events 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.all_stores" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.all_stores" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.all_branches_pebs" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.all_branches_pebs" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_taken" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_taken" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "mem_inst_retired.lock_loads" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "mem_inst_retired.lock_loads" | wc -l 1>> mult_events_log 2>> mult_events_log
	echo "br_inst_retired.near_return" 1>> mult_events_log 2>> mult_events_log
	perf script -F time,event | grep "br_inst_retired.near_return" | wc -l 1>> mult_events_log 2>> mult_events_log	

clean:
	rm *_log
	rm mult-events
	rm perf.data*
