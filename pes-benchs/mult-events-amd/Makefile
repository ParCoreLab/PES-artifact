
install:
	gcc mult-events.c cpu_check.c -o mult-events -fopenmp

run5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 ./mult-events 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 ./mult-events 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 ./mult-events 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 ./mult-events 1>> mult_events_log 2>> mult_events_log
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 ./mult-events 1>> mult_events_log 2>> mult_events_log

clean:
	rm *_log
	rm mult-events
