#! /bin/bash

GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_log1
GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_log2
GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_log3
GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_log4
GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_log5

