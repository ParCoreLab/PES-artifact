#! /bin/bash

GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./heartwall ../../data/heartwall/test.avi 104 1 2>&1 | tee heartwall_log1
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./heartwall ../../data/heartwall/test.avi 104 1 2>&1 | tee heartwall_log2
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./heartwall ../../data/heartwall/test.avi 104 1 2>&1 | tee heartwall_log3
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./heartwall ../../data/heartwall/test.avi 104 1 2>&1 | tee heartwall_log4
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./heartwall ../../data/heartwall/test.avi 104 1 2>&1 | tee heartwall_log5

