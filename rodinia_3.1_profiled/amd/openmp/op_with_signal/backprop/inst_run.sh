#! /bin/bash

GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" /home/msasongko17/research/hpctoolkit-bin/bin/hpcrun -e WP_COUNT -e INST_RETIRED:PREC_DIST@100000 ./backprop 16777216 2>&1 | tee backprop_inst_log1
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" /home/msasongko17/research/hpctoolkit-bin/bin/hpcrun -e WP_COUNT -e INST_RETIRED:PREC_DIST@100000 ./backprop 16777216 2>&1 | tee backprop_inst_log2
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" /home/msasongko17/research/hpctoolkit-bin/bin/hpcrun -e WP_COUNT -e INST_RETIRED:PREC_DIST@100000 ./backprop 16777216 2>&1 | tee backprop_inst_log3
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" /home/msasongko17/research/hpctoolkit-bin/bin/hpcrun -e WP_COUNT -e INST_RETIRED:PREC_DIST@100000 ./backprop 16777216 2>&1 | tee backprop_inst_log4
GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" /home/msasongko17/research/hpctoolkit-bin/bin/hpcrun -e WP_COUNT -e INST_RETIRED:PREC_DIST@100000 ./backprop 16777216 2>&1 | tee backprop_inst_log5
