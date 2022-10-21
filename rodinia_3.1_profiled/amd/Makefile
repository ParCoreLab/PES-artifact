include common/make.config

RODINIA_BASE_DIR := $(shell pwd)

CUDA_BIN_DIR := $(RODINIA_BASE_DIR)/bin/linux/cuda
OMP_BIN_DIR := $(RODINIA_BASE_DIR)/bin
OPENCL_BIN_DIR := $(RODINIA_BASE_DIR)/bin/linux/opencl

CUDA_DIRS := backprop bfs cfd gaussian heartwall hotspot kmeans lavaMD leukocyte lud nn	nw srad streamcluster particlefilter pathfinder mummergpu
OMP_DIRS  := backprop bfs cfd heartwall hotspot kmeans lavaMD lud nw pathfinder
OCL_DIRS  := backprop bfs cfd gaussian heartwall hotspot kmeans lavaMD leukocyte lud nn	nw srad streamcluster particlefilter pathfinder

all: CUDA OMP OPENCL

CUDA: 
	cd cuda/backprop;		make;	cp backprop $(CUDA_BIN_DIR)
	cd cuda/bfs; 			make;	cp bfs $(CUDA_BIN_DIR)
	cd cuda/cfd; 			make;	cp euler3d euler3d_double pre_euler3d pre_euler3d_double $(CUDA_BIN_DIR)
	cd cuda/gaussian;		make;	cp gaussian $(CUDA_BIN_DIR)
	cd cuda/heartwall;  		make;	cp heartwall $(CUDA_BIN_DIR)
	cd cuda/hotspot; 		make;	cp hotspot $(CUDA_BIN_DIR)
	cd cuda/kmeans; 		make;	cp kmeans $(CUDA_BIN_DIR)
	cd cuda/lavaMD;			make;	cp lavaMD $(CUDA_BIN_DIR)
	cd cuda/leukocyte;  		make;	cp CUDA/leukocyte $(CUDA_BIN_DIR)
	cd cuda/lud; 			make;	cp cuda/lud_cuda $(CUDA_BIN_DIR)
	cd cuda/nn;				make;	cp nn $(CUDA_BIN_DIR)
	cd cuda/nw; 			make;	cp needle $(CUDA_BIN_DIR)
	cd cuda/srad/srad_v1; 		make;	cp srad $(CUDA_BIN_DIR)/srad_v1
	cd cuda/srad/srad_v2; 		make;   cp srad $(CUDA_BIN_DIR)/srad_v2
	cd cuda/streamcluster;		make;	cp sc_gpu $(CUDA_BIN_DIR)
	cd cuda/particlefilter;		make;	cp particlefilter_naive particlefilter_float $(CUDA_BIN_DIR)       
	cd cuda/pathfinder;		make;	cp pathfinder $(CUDA_BIN_DIR)
	cd cuda/mummergpu;  		make;	cp bin/mummergpu $(CUDA_BIN_DIR)
	cd cuda/hybridsort;              make;   cp hybridsort $(CUDA_BIN_DIR)
	cd cuda/dwt2d;                   make;   cp dwt2d  $(CUDA_BIN_DIR)
	
	
OMP:
	cd openmp/backprop;				make;	cp backprop $(OMP_BIN_DIR)
	cd openmp/bfs; 					make;	cp bfs $(OMP_BIN_DIR)
	cd openmp/cfd; 					make;	cp euler3d_cpu euler3d_cpu_double pre_euler3d_cpu pre_euler3d_cpu_double $(OMP_BIN_DIR)
	cd openmp/heartwall;  				make;	cp heartwall $(OMP_BIN_DIR)
	cd openmp/hotspot; 				make;	cp hotspot $(OMP_BIN_DIR)
	cd openmp/kmeans/kmeans_openmp;			make;	cp kmeans $(OMP_BIN_DIR)
	cd openmp/lavaMD;				make;	cp lavaMD $(OMP_BIN_DIR)
	cd openmp/lud; 					make;	cp omp/lud_omp $(OMP_BIN_DIR)
	cd openmp/nw; 					make;	cp needle $(OMP_BIN_DIR)
	cd openmp/pathfinder;			make;	cp pathfinder $(OMP_BIN_DIR)

overhead_experiment:	install_all experiment_run_5x

overhead_experiment_fast:    install_all experiment_run

prepare_data:
	git clone https://github.com/msasongko17/rodinia_data; mv rodinia_data data
	cd data/bfs/inputGen; make; ./graphgen 16777216 16M
	cd data/hotspot/inputGen; make; ./hotspotex
	cd data/kmeans/inpuGen; make; ./datagen 3000000

install_all:	original_install fetch_no_signal_install fetch_with_signal_install op_no_signal_install op_with_signal_install

original_install:
	mkdir $(OMP_BIN_DIR)
	cd openmp/original/backprop;                             make;   cp backprop $(OMP_BIN_DIR)
	cd openmp/original/bfs;                                  make;   cp bfs $(OMP_BIN_DIR)
	cd openmp/original/cfd;                                  make;   cp euler3d_cpu euler3d_cpu_double pre_euler3d_cpu pre_euler3d_cpu_double $(OMP_BIN_DIR)
	cd openmp/original/heartwall;                            make;   cp heartwall $(OMP_BIN_DIR)
	cd openmp/original/hotspot;                              make;   cp hotspot $(OMP_BIN_DIR)
	cd openmp/original/kmeans/kmeans_openmp;                 make;   cp kmeans $(OMP_BIN_DIR)
	cd openmp/original/lavaMD;                               make;   cp lavaMD $(OMP_BIN_DIR)
	cd openmp/original/lud;                                  make;   cp omp/lud_omp $(OMP_BIN_DIR)
	cd openmp/original/nw;                                   make;   cp needle $(OMP_BIN_DIR)
	cd openmp/original/pathfinder;                   make;   cp pathfinder $(OMP_BIN_DIR)

fetch_no_signal_install:
	cd openmp/fetch_no_signal/backprop;                             make;   cp backprop $(OMP_BIN_DIR)
	cd openmp/fetch_no_signal/bfs;                                  make;   cp bfs $(OMP_BIN_DIR)
	cd openmp/fetch_no_signal/cfd;                                  make;   cp euler3d_cpu euler3d_cpu_double pre_euler3d_cpu pre_euler3d_cpu_double $(OMP_BIN_DIR)
	cd openmp/fetch_no_signal/heartwall;                            make;   cp heartwall $(OMP_BIN_DIR)
	cd openmp/fetch_no_signal/hotspot;                              make;   cp hotspot $(OMP_BIN_DIR)
	cd openmp/fetch_no_signal/kmeans/kmeans_openmp;                 make;   cp kmeans $(OMP_BIN_DIR)
	cd openmp/fetch_no_signal/lavaMD;                               make;   cp lavaMD $(OMP_BIN_DIR)
	cd openmp/fetch_no_signal/lud;                                  make;   cp omp/lud_omp $(OMP_BIN_DIR)
	cd openmp/fetch_no_signal/nw;                                   make;   cp needle $(OMP_BIN_DIR)
	cd openmp/fetch_no_signal/pathfinder;                   make;   cp pathfinder $(OMP_BIN_DIR)

fetch_with_signal_install:
	cd openmp/fetch_with_signal/backprop;                             make;   cp backprop $(OMP_BIN_DIR)
	cd openmp/fetch_with_signal/bfs;                                  make;   cp bfs $(OMP_BIN_DIR)
	cd openmp/fetch_with_signal/cfd;                                  make;   cp euler3d_cpu euler3d_cpu_double pre_euler3d_cpu pre_euler3d_cpu_double $(OMP_BIN_DIR)
	cd openmp/fetch_with_signal/heartwall;                            make;   cp heartwall $(OMP_BIN_DIR)
	cd openmp/fetch_with_signal/hotspot;                              make;   cp hotspot $(OMP_BIN_DIR)
	cd openmp/fetch_with_signal/kmeans/kmeans_openmp;                 make;   cp kmeans $(OMP_BIN_DIR)
	cd openmp/fetch_with_signal/lavaMD;                               make;   cp lavaMD $(OMP_BIN_DIR)
	cd openmp/fetch_with_signal/lud;                                  make;   cp omp/lud_omp $(OMP_BIN_DIR)
	cd openmp/fetch_with_signal/nw;                                   make;   cp needle $(OMP_BIN_DIR)
	cd openmp/fetch_with_signal/pathfinder;                   make;   cp pathfinder $(OMP_BIN_DIR)

op_no_signal_install:
	cd openmp/op_no_signal/backprop;                             make;   cp backprop $(OMP_BIN_DIR)
	cd openmp/op_no_signal/bfs;                                  make;   cp bfs $(OMP_BIN_DIR)
	cd openmp/op_no_signal/cfd;                                  make;   cp euler3d_cpu euler3d_cpu_double pre_euler3d_cpu pre_euler3d_cpu_double $(OMP_BIN_DIR)
	cd openmp/op_no_signal/heartwall;                            make;   cp heartwall $(OMP_BIN_DIR)
	cd openmp/op_no_signal/hotspot;                              make;   cp hotspot $(OMP_BIN_DIR)
	cd openmp/op_no_signal/kmeans/kmeans_openmp;                 make;   cp kmeans $(OMP_BIN_DIR)
	cd openmp/op_no_signal/lavaMD;                               make;   cp lavaMD $(OMP_BIN_DIR)
	cd openmp/op_no_signal/lud;                                  make;   cp omp/lud_omp $(OMP_BIN_DIR)
	cd openmp/op_no_signal/nw;                                   make;   cp needle $(OMP_BIN_DIR)
	cd openmp/op_no_signal/pathfinder;                   make;   cp pathfinder $(OMP_BIN_DIR)

op_with_signal_install:
	cd openmp/op_with_signal/backprop;                             make;   cp backprop $(OMP_BIN_DIR)
	cd openmp/op_with_signal/bfs;                                  make;   cp bfs $(OMP_BIN_DIR)
	cd openmp/op_with_signal/cfd;                                  make;   cp euler3d_cpu euler3d_cpu_double pre_euler3d_cpu pre_euler3d_cpu_double $(OMP_BIN_DIR)
	cd openmp/op_with_signal/heartwall;                            make;   cp heartwall $(OMP_BIN_DIR)
	cd openmp/op_with_signal/hotspot;                              make;   cp hotspot $(OMP_BIN_DIR)
	cd openmp/op_with_signal/kmeans/kmeans_openmp;                 make;   cp kmeans $(OMP_BIN_DIR)
	cd openmp/op_with_signal/lavaMD;                               make;   cp lavaMD $(OMP_BIN_DIR)
	cd openmp/op_with_signal/lud;                                  make;   cp omp/lud_omp $(OMP_BIN_DIR)
	cd openmp/op_with_signal/nw;                                   make;   cp needle $(OMP_BIN_DIR)
	cd openmp/op_with_signal/pathfinder;                   make;   cp pathfinder $(OMP_BIN_DIR)

experiment_run:	original_run fetch_no_signal_run fetch_with_signal_run op_no_signal_run op_with_signal_run


experiment_run_5x: original_run_5x fetch_no_signal_run_5x fetch_with_signal_run_5x op_no_signal_run_5x op_with_signal_run_5x


original_run:	lavamd_run lud_run nw_run pathfinder_run kmeans_run backprop_run cfd_run bfs_run hotspot_run heartwall_run
original_run_5x:   lavamd_run_5x lud_run_5x nw_run_5x pathfinder_run_5x kmeans_run_5x backprop_run_5x cfd_run_5x bfs_run_5x hotspot_run_5x heartwall_run_5x


lavamd_run:
	        GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_log

lavamd_run_5x:
	                GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_log1
			GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_log2
			GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_log3
			GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_log4
			GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_log5



lud_run:
	        GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_log


lud_run_5x:
	                GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_log1
			GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_log2
			GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_log3
			GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_log4
			GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_log5


nw_run:
	        OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/nw/needle 32768 10 1 2>&1 | tee nw_log


nw_run_5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/nw/needle 32768 10 1 2>&1 | tee nw_log1
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/nw/needle 32768 10 1 2>&1 | tee nw_log2
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/nw/needle 32768 10 1 2>&1 | tee nw_log3
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/nw/needle 32768 10 1 2>&1 | tee nw_log4
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/nw/needle 32768 10 1 2>&1 | tee nw_log5


pathfinder_run:
	        OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/pathfinder/pathfinder 100000 1000 $&> pathfinder_log


pathfinder_run_5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/pathfinder/pathfinder 100000 1000 $&> pathfinder_log1
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/pathfinder/pathfinder 100000 1000 $&> pathfinder_log2
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/pathfinder/pathfinder 100000 1000 $&> pathfinder_log3
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/pathfinder/pathfinder 100000 1000 $&> pathfinder_log4
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/pathfinder/pathfinder 100000 1000 $&> pathfinder_log5


kmeans_run:
	        GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_log


kmeans_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/original/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_log5


backprop_run:
	        GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/backprop/backprop 16777216 2>&1 | tee backprop_log

backprop_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/backprop/backprop 16777216 2>&1 | tee backprop_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/backprop/backprop 16777216 2>&1 | tee backprop_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/backprop/backprop 16777216 2>&1 | tee backprop_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/backprop/backprop 16777216 2>&1 | tee backprop_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/backprop/backprop 16777216 2>&1 | tee backprop_log5


cfd_run:
	        GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_log

cfd_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_log5


bfs_run:
	        OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_log

bfs_run_5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_log1
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_log2
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_log3
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_log4
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_log5

hotspot_run:
	        GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/original/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_log


hotspot_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/original/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/original/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/original/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/original/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/original/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_log5


heartwall_run:
	        GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_log

heartwall_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/original/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_log5


fetch_no_signal_run:   lavamd_fetch_no_signal_run lud_fetch_no_signal_run nw_fetch_no_signal_run pathfinder_fetch_no_signal_run kmeans_fetch_no_signal_run backprop_fetch_no_signal_run cfd_fetch_no_signal_run bfs_fetch_no_signal_run hotspot_fetch_no_signal_run heartwall_fetch_no_signal_run

fetch_no_signal_run_5x:   lavamd_fetch_no_signal_run_5x lud_fetch_no_signal_run_5x nw_fetch_no_signal_run_5x pathfinder_fetch_no_signal_run_5x kmeans_fetch_no_signal_run_5x backprop_fetch_no_signal_run_5x cfd_fetch_no_signal_run_5x bfs_fetch_no_signal_run_5x hotspot_fetch_no_signal_run_5x heartwall_fetch_no_signal_run_5x


lavamd_fetch_no_signal_run:
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_fetch_no_signal_log

lavamd_fetch_no_signal_run_5x:
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_fetch_no_signal_log1
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_fetch_no_signal_log2
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_fetch_no_signal_log3
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_fetch_no_signal_log4
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_fetch_no_signal_log5


lud_fetch_no_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_fetch_no_signal_log

lud_fetch_no_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_fetch_no_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_fetch_no_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_fetch_no_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_fetch_no_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_fetch_no_signal_log5


nw_fetch_no_signal_run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/nw/needle 32768 10 1 2>&1 | tee nw_fetch_no_signal_log

nw_fetch_no_signal_run_5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/nw/needle 32768 10 1 2>&1 | tee nw_fetch_no_signal_log1
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/nw/needle 32768 10 1 2>&1 | tee nw_fetch_no_signal_log2
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/nw/needle 32768 10 1 2>&1 | tee nw_fetch_no_signal_log3
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/nw/needle 32768 10 1 2>&1 | tee nw_fetch_no_signal_log4
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/nw/needle 32768 10 1 2>&1 | tee nw_fetch_no_signal_log5


pathfinder_fetch_no_signal_run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_fetch_no_signal_log

pathfinder_fetch_no_signal_run_5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_fetch_no_signal_log1
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_fetch_no_signal_log2
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_fetch_no_signal_log3
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_fetch_no_signal_log4
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_fetch_no_signal_log5


kmeans_fetch_no_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_fetch_no_signal_log

kmeans_fetch_no_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_fetch_no_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_fetch_no_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_fetch_no_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_fetch_no_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_no_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_fetch_no_signal_log5


backprop_fetch_no_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/backprop/backprop 16777216 2>&1 | tee backprop_fetch_no_signal_log

backprop_fetch_no_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/backprop/backprop 16777216 2>&1 | tee backprop_fetch_no_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/backprop/backprop 16777216 2>&1 | tee backprop_fetch_no_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/backprop/backprop 16777216 2>&1 | tee backprop_fetch_no_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/backprop/backprop 16777216 2>&1 | tee backprop_fetch_no_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/backprop/backprop 16777216 2>&1 | tee backprop_fetch_no_signal_log5


cfd_fetch_no_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_fetch_no_signal_log

cfd_fetch_no_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_fetch_no_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_fetch_no_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_fetch_no_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_fetch_no_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_fetch_no_signal_log5


bfs_fetch_no_signal_run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_fetch_no_signal_log

bfs_fetch_no_signal_run_5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_fetch_no_signal_log1
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_fetch_no_signal_log2
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_fetch_no_signal_log3
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_fetch_no_signal_log4
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_fetch_no_signal_log5


hotspot_fetch_no_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/fetch_no_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_fetch_no_signal_log
	

hotspot_fetch_no_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/fetch_no_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_fetch_no_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/fetch_no_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_fetch_no_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/fetch_no_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_fetch_no_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/fetch_no_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_fetch_no_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/fetch_no_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_fetch_no_signal_log5


heartwall_fetch_no_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_fetch_no_signal_log

heartwall_fetch_no_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_fetch_no_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_fetch_no_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_fetch_no_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_fetch_no_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_no_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_fetch_no_signal_log5


fetch_with_signal_run:   lavamd_fetch_with_signal_run lud_fetch_with_signal_run nw_fetch_with_signal_run pathfinder_fetch_with_signal_run kmeans_fetch_with_signal_run backprop_fetch_with_signal_run cfd_fetch_with_signal_run bfs_fetch_with_signal_run hotspot_fetch_with_signal_run heartwall_fetch_with_signal_run

fetch_with_signal_run_5x:   lavamd_fetch_with_signal_run_5x lud_fetch_with_signal_run_5x nw_fetch_with_signal_run_5x pathfinder_fetch_with_signal_run_5x kmeans_fetch_with_signal_run_5x backprop_fetch_with_signal_run_5x cfd_fetch_with_signal_run_5x bfs_fetch_with_signal_run_5x hotspot_fetch_with_signal_run_5x heartwall_fetch_with_signal_run_5x

lavamd_fetch_with_signal_run:
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_fetch_with_signal_log

lavamd_fetch_with_signal_run_5x:
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_fetch_with_signal_log1
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_fetch_with_signal_log2
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_fetch_with_signal_log3
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_fetch_with_signal_log4
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_fetch_with_signal_log5


lud_fetch_with_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_fetch_with_signal_log

lud_fetch_with_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_fetch_with_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_fetch_with_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_fetch_with_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_fetch_with_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_fetch_with_signal_log5


nw_fetch_with_signal_run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/nw/needle 32768 10 1 2>&1 | tee nw_fetch_with_signal_log

nw_fetch_with_signal_run_5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/nw/needle 32768 10 1 2>&1 | tee nw_fetch_with_signal_log1
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/nw/needle 32768 10 1 2>&1 | tee nw_fetch_with_signal_log2
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/nw/needle 32768 10 1 2>&1 | tee nw_fetch_with_signal_log3
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/nw/needle 32768 10 1 2>&1 | tee nw_fetch_with_signal_log4
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/nw/needle 32768 10 1 2>&1 | tee nw_fetch_with_signal_log5


pathfinder_fetch_with_signal_run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_fetch_with_signal_log

pathfinder_fetch_with_signal_run_5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_fetch_with_signal_log1
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_fetch_with_signal_log2
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_fetch_with_signal_log3
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_fetch_with_signal_log4
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_fetch_with_signal_log5


kmeans_fetch_with_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_fetch_with_signal_log

kmeans_fetch_with_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_fetch_with_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_fetch_with_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_fetch_with_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_fetch_with_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/fetch_with_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_fetch_with_signal_log5


backprop_fetch_with_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/backprop/backprop 16777216 2>&1 | tee backprop_fetch_with_signal_log

backprop_fetch_with_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/backprop/backprop 16777216 2>&1 | tee backprop_fetch_with_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/backprop/backprop 16777216 2>&1 | tee backprop_fetch_with_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/backprop/backprop 16777216 2>&1 | tee backprop_fetch_with_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/backprop/backprop 16777216 2>&1 | tee backprop_fetch_with_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/backprop/backprop 16777216 2>&1 | tee backprop_fetch_with_signal_log5


cfd_fetch_with_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_fetch_with_signal_log

cfd_fetch_with_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_fetch_with_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_fetch_with_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_fetch_with_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_fetch_with_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_fetch_with_signal_log5


bfs_fetch_with_signal_run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_fetch_with_signal_log

bfs_fetch_with_signal_run_5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_fetch_with_signal_log1
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_fetch_with_signal_log2
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_fetch_with_signal_log3
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_fetch_with_signal_log4
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_fetch_with_signal_log5


hotspot_fetch_with_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/fetch_with_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_fetch_with_signal_log

hotspot_fetch_with_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/fetch_with_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_fetch_with_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/fetch_with_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_fetch_with_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/fetch_with_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_fetch_with_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/fetch_with_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_fetch_with_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/fetch_with_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_fetch_with_signal_log5


heartwall_fetch_with_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_fetch_with_signal_log

heartwall_fetch_with_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_fetch_with_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_fetch_with_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_fetch_with_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_fetch_with_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/fetch_with_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_fetch_with_signal_log5

op_no_signal_run:   lavamd_op_no_signal_run lud_op_no_signal_run nw_op_no_signal_run pathfinder_op_no_signal_run kmeans_op_no_signal_run backprop_op_no_signal_run cfd_op_no_signal_run bfs_op_no_signal_run hotspot_op_no_signal_run heartwall_op_no_signal_run

op_no_signal_run_5x:   lavamd_op_no_signal_run_5x lud_op_no_signal_run_5x nw_op_no_signal_run_5x pathfinder_op_no_signal_run_5x kmeans_op_no_signal_run_5x backprop_op_no_signal_run_5x cfd_op_no_signal_run_5x bfs_op_no_signal_run_5x hotspot_op_no_signal_run_5x heartwall_op_no_signal_run_5x

lavamd_op_no_signal_run:
	        GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_op_no_signal_log

lavamd_op_no_signal_run_5x:
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_op_no_signal_log1
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_op_no_signal_log2
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_op_no_signal_log3
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_op_no_signal_log4
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_op_no_signal_log5

lud_op_no_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_op_no_signal_log

lud_op_no_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_op_no_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_op_no_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_op_no_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_op_no_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_op_no_signal_log5

nw_op_no_signal_run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/nw/needle 32768 10 1 2>&1 | tee nw_op_no_signal_log

nw_op_no_signal_run_5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/nw/needle 32768 10 1 2>&1 | tee nw_op_no_signal_log1
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/nw/needle 32768 10 1 2>&1 | tee nw_op_no_signal_log2
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/nw/needle 32768 10 1 2>&1 | tee nw_op_no_signal_log3
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/nw/needle 32768 10 1 2>&1 | tee nw_op_no_signal_log4
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/nw/needle 32768 10 1 2>&1 | tee nw_op_no_signal_log5

pathfinder_op_no_signal_run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_op_no_signal_log

pathfinder_op_no_signal_run_5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_op_no_signal_log1
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_op_no_signal_log2
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_op_no_signal_log3
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_op_no_signal_log4
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_op_no_signal_log5


kmeans_op_no_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_op_no_signal_log

kmeans_op_no_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_op_no_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_op_no_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_op_no_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_op_no_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_no_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_op_no_signal_log5


backprop_op_no_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/backprop/backprop 16777216 2>&1 | tee backprop_op_no_signal_log

backprop_op_no_signal_run_5x:
	        GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/backprop/backprop 16777216 2>&1 | tee backprop_op_no_signal_log1
		GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/backprop/backprop 16777216 2>&1 | tee backprop_op_no_signal_log2
		GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/backprop/backprop 16777216 2>&1 | tee backprop_op_no_signal_log3
		GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/backprop/backprop 16777216 2>&1 | tee backprop_op_no_signal_log4
		GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/backprop/backprop 16777216 2>&1 | tee backprop_op_no_signal_log5


cfd_op_no_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_op_no_signal_log

cfd_op_no_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_op_no_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_op_no_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_op_no_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_op_no_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_op_no_signal_log5


bfs_op_no_signal_run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_op_no_signal_log

bfs_op_no_signal_run_5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_op_no_signal_log1
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_op_no_signal_log2
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_op_no_signal_log3
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_op_no_signal_log4
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_op_no_signal_log5


hotspot_op_no_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/op_no_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_op_no_signal_log

hotspot_op_no_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/op_no_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_op_no_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/op_no_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_op_no_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/op_no_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_op_no_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/op_no_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_op_no_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/op_no_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_op_no_signal_log5


heartwall_op_no_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_op_no_signal_log

heartwall_op_no_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_op_no_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_op_no_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_op_no_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_op_no_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_no_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_op_no_signal_log5


op_with_signal_run:   lavamd_op_with_signal_run lud_op_with_signal_run nw_op_with_signal_run pathfinder_op_with_signal_run kmeans_op_with_signal_run backprop_op_with_signal_run cfd_op_with_signal_run bfs_op_with_signal_run hotspot_op_with_signal_run heartwall_op_with_signal_run

op_with_signal_run_5x:   lavamd_op_with_signal_run_5x lud_op_with_signal_run_5x nw_op_with_signal_run_5x pathfinder_op_with_signal_run_5x kmeans_op_with_signal_run_5x backprop_op_with_signal_run_5x cfd_op_with_signal_run_5x bfs_op_with_signal_run_5x hotspot_op_with_signal_run_5x heartwall_op_with_signal_run_5x


lavamd_op_with_signal_run:
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_op_with_signal_log

lavamd_op_with_signal_run_5x:
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_op_with_signal_log1
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_op_with_signal_log2
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_op_with_signal_log3
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_op_with_signal_log4
	GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/lavaMD/lavaMD -cores 1 -boxes1d 25 2>&1 | tee lavamd_op_with_signal_log5


lud_op_with_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_op_with_signal_log

lud_op_with_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_op_with_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_op_with_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_op_with_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_op_with_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/lud/omp/lud_omp -n 1 -s 4000 2>&1 | tee lud_op_with_signal_log5


nw_op_with_signal_run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/nw/needle 32768 10 1 2>&1 | tee nw_op_with_signal_log

nw_op_with_signal_run_5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/nw/needle 32768 10 1 2>&1 | tee nw_op_with_signal_log1
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/nw/needle 32768 10 1 2>&1 | tee nw_op_with_signal_log2
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/nw/needle 32768 10 1 2>&1 | tee nw_op_with_signal_log3
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/nw/needle 32768 10 1 2>&1 | tee nw_op_with_signal_log4
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/nw/needle 32768 10 1 2>&1 | tee nw_op_with_signal_log5


pathfinder_op_with_signal_run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_op_with_signal_log

pathfinder_op_with_signal_run_5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_op_with_signal_log1
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_op_with_signal_log2
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_op_with_signal_log3
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_op_with_signal_log4
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/pathfinder/pathfinder 100000 1000 $&> pathfinder_op_with_signal_log5


kmeans_op_with_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_op_with_signal_log

kmeans_op_with_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_op_with_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_op_with_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_op_with_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_op_with_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" ./openmp/op_with_signal/kmeans/kmeans_openmp/kmeans -n 1 -i data/kmeans/inpuGen/3000000_34.txt 2>&1 | tee kmeans_op_with_signal_log5


backprop_op_with_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/backprop/backprop 16777216 2>&1 | tee backprop_op_with_signal_log

backprop_op_with_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/backprop/backprop 16777216 2>&1 | tee backprop_op_with_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/backprop/backprop 16777216 2>&1 | tee backprop_op_with_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/backprop/backprop 16777216 2>&1 | tee backprop_op_with_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/backprop/backprop 16777216 2>&1 | tee backprop_op_with_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/backprop/backprop 16777216 2>&1 | tee backprop_op_with_signal_log5


cfd_op_with_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_op_with_signal_log

cfd_op_with_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_op_with_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_op_with_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_op_with_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_op_with_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/cfd/euler3d_cpu data/cfd/fvcorr.domn.193K 2>&1 | tee cfd_op_with_signal_log5


bfs_op_with_signal_run:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_op_with_signal_log

bfs_op_with_signal_run_5x:
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_op_with_signal_log1
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_op_with_signal_log2
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_op_with_signal_log3
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_op_with_signal_log4
	OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/bfs/bfs 1 data/bfs/inputGen/graph16M.txt 2>&1 | tee bfs_op_with_signal_log5


hotspot_op_with_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/op_with_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_op_with_signal_log

hotspot_op_with_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/op_with_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_op_with_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/op_with_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_op_with_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/op_with_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_op_with_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/op_with_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_op_with_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M"  openmp/op_with_signal/hotspot/hotspot 8192 8192 2 1 data/hotspot/inputGen/temp_8192 data/hotspot/inputGen/power_8192 output.out 2>&1 | tee hotspot_op_with_signal_log5


heartwall_op_with_signal_run:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_op_with_signal_log

heartwall_op_with_signal_run_5x:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_op_with_signal_log1
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_op_with_signal_log2
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_op_with_signal_log3
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_op_with_signal_log4
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" openmp/op_with_signal/heartwall/heartwall data/heartwall/test.avi 104 1 2>&1 | tee heartwall_op_with_signal_log5


OPENCL:
	cd opencl/backprop;			make;	cp backprop $(OPENCL_BIN_DIR)
	cd opencl/bfs;				make;	cp bfs	    $(OPENCL_BIN_DIR)
	cd opencl/cfd;				make;	cp euler3d	$(OPENCL_BIN_DIR)
	cd opencl/hotspot;			make;	cp hotspot	$(OPENCL_BIN_DIR)
	cd opencl/kmeans;			make;	cp kmeans	$(OPENCL_BIN_DIR)
	cd opencl/lavaMD;			make;	cp lavaMD	$(OPENCL_BIN_DIR)
	cd opencl/leukocyte;			make;	cp OpenCL/leukocyte	$(OPENCL_BIN_DIR)
	cd opencl/lud/ocl;			make;	cp lud		$(OPENCL_BIN_DIR)
	cd opencl/nw;				make;	cp nw		$(OPENCL_BIN_DIR)
	cd opencl/srad;				make; 	cp srad		$(OPENCL_BIN_DIR)
	cd opencl/streamcluster;		make;	cp streamcluster	$(OPENCL_BIN_DIR)
	cd opencl/pathfinder;			make;	cp pathfinder	$(OPENCL_BIN_DIR)
	cd opencl/particlefilter;		make;	cp OCL_particlefilter_naive OCL_particlefilter_single OCL_particlefilter_double $(OPENCL_BIN_DIR)
	cd opencl/gaussian;			make;	cp gaussian	$(OPENCL_BIN_DIR)
	cd opencl/nn;				make;	cp nn	$(OPENCL_BIN_DIR)
	cd opencl/heartwall;		make;	cp heartwall	$(OPENCL_BIN_DIR)
	cd opencl/hybridsort;              make;   cp hybridsort $(CUDA_BIN_DIR)
	cd opencl/dwt2d;                   make;   cp dwt2d  $(CUDA_BIN_DIR)
	
clean: CUDA_clean OMP_clean OCL_clean

CUDA_clean:
	cd $(CUDA_BIN_DIR); rm -f *
	for dir in $(CUDA_DIRS) ; do cd cuda/$$dir ; make clean ; cd ../.. ; done
	
OMP_clean:
	cd $(OMP_BIN_DIR); rm -f *
	for dir in $(OMP_DIRS) ; do cd openmp/fetch_no_signal/$$dir ; make clean ; cd ../../.. ; done
	for dir in $(OMP_DIRS) ; do cd openmp/fetch_with_signal/$$dir ; make clean ; cd ../../.. ; done
	for dir in $(OMP_DIRS) ; do cd openmp/op_no_signal/$$dir ; make clean ; cd ../../.. ; done
	for dir in $(OMP_DIRS) ; do cd openmp/op_with_signal/$$dir ; make clean ; cd ../../.. ; done
	for dir in $(OMP_DIRS) ; do cd openmp/original/$$dir ; make clean ; cd ../../.. ; done
	rm openmp/original/hotspot/output.out ; rm openmp/fetch_with_signal/hotspot/output.out ; rm openmp/fetch_no_signal/hotspot/output.out ; rm openmp/op_with_signal/hotspot/output.out ; rm openmp/op_no_signal/hotspot/output.out ; rm output.out

OCL_clean:
	cd $(OPENCL_BIN_DIR); rm -f *
	for dir in $(OCL_DIRS) ; do cd opencl/$$dir ; make clean ; cd ../.. ; done
