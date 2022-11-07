#How to count the occurences of each event
1. Install perf using the package manager of your Linux distribution or from the source code of Linux kernel in the <linux-root-directory>/tools/perf directory
2. Learn the names of the events to be monitored by typing <path-to-perf-binary>/perf list
3. Compile the benchmark by typing the following command in case your compiler is gcc

gcc mult-events.c -o mult-events -fopenmp 

3. Monitor the events by using the following command in case the number of events is 4, 
you can change the arguments accordingly depending the event types and the number of events.

GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1  <path-to-perf-binary>/perf record -e <name-of-event-1>:up -c 100000 -e <name-of-event-2>:up -c 100000 -e <name-of-event-3>:up -c 100000 -e <name-of-event-4>:up -c 100000  ./mult-events
