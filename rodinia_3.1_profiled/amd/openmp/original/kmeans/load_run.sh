#! /bin/bash

GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" /home/msasongko17/research/hpctoolkit-bin/bin/hpcrun -e WP_COUNT -e MEM_UOPS_RETIRED:ALL_LOADS@100000 ./kmeans_openmp/kmeans -n 1 -i ../../data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_profiled_log1
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" /home/msasongko17/research/hpctoolkit-bin/bin/hpcrun -e WP_COUNT -e MEM_UOPS_RETIRED:ALL_LOADS@100000 ./kmeans_openmp/kmeans -n 1 -i ../../data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_profiled_log2
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" /home/msasongko17/research/hpctoolkit-bin/bin/hpcrun -e WP_COUNT -e MEM_UOPS_RETIRED:ALL_LOADS@100000 ./kmeans_openmp/kmeans -n 1 -i ../../data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_profiled_log3
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" /home/msasongko17/research/hpctoolkit-bin/bin/hpcrun -e WP_COUNT -e MEM_UOPS_RETIRED:ALL_LOADS@100000 ./kmeans_openmp/kmeans -n 1 -i ../../data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_profiled_log4
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" /home/msasongko17/research/hpctoolkit-bin/bin/hpcrun -e WP_COUNT -e MEM_UOPS_RETIRED:ALL_LOADS@100000 ./kmeans_openmp/kmeans -n 1 -i ../../data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_profiled_log5

