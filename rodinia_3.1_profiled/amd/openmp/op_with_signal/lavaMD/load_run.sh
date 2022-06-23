#! /bin/bash

GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" /home/msasongko17/research/hpctoolkit-bin/bin/hpcrun -e WP_COUNT -e MEM_UOPS_RETIRED:ALL_LOADS@100000 ./lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_profiled_log1
GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" /home/msasongko17/research/hpctoolkit-bin/bin/hpcrun -e WP_COUNT -e MEM_UOPS_RETIRED:ALL_LOADS@100000 ./lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_profiled_log2
GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" /home/msasongko17/research/hpctoolkit-bin/bin/hpcrun -e WP_COUNT -e MEM_UOPS_RETIRED:ALL_LOADS@100000 ./lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_profiled_log3
GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" /home/msasongko17/research/hpctoolkit-bin/bin/hpcrun -e WP_COUNT -e MEM_UOPS_RETIRED:ALL_LOADS@100000 ./lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_profiled_log4
GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" /home/msasongko17/research/hpctoolkit-bin/bin/hpcrun -e WP_COUNT -e MEM_UOPS_RETIRED:ALL_LOADS@100000 ./lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_profiled_log5

