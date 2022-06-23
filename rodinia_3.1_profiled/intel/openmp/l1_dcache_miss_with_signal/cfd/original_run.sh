#! /bin/bash

GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./euler3d_cpu ../../data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_log1
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./euler3d_cpu ../../data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_log2
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./euler3d_cpu ../../data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_log3
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./euler3d_cpu ../../data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_log4
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./euler3d_cpu ../../data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_log5

