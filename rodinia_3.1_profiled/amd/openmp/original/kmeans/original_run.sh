#! /bin/bash

GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./kmeans_openmp/kmeans -n 1 -i ../../data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_log1
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./kmeans_openmp/kmeans -n 1 -i ../../data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_log2
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./kmeans_openmp/kmeans -n 1 -i ../../data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_log3
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./kmeans_openmp/kmeans -n 1 -i ../../data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_log4
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./kmeans_openmp/kmeans -n 1 -i ../../data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_log5

