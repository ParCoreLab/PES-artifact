all:	install run

install:
	gcc four-loads-asm.c -g -o four-loads-asm

run:	four-loads-even four-loads-odd

four-loads-even:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" /home/msasongko17/Documents/amd_with_signal/hpctoolkit-bin/bin/hpcrun -e WP_AMD_COMM -e IBS_OP@100000 ./four-loads-asm
	/home/msasongko17/Documents/amd_with_signal/hpctoolkit-bin/bin/hpcstruct ./four-loads-asm
	/home/msasongko17/Documents/amd_with_signal/hpctoolkit-bin/bin/hpcprof -S ./four-loads-asm.hpcstruct -o four-loads-asm_database hpctoolkit-four-loads-asm-measurements
	mkdir four-loads-even
	mv four-loads-asm_database four-loads-even
	rm -r ./four-loads-asm.hpcstruct hpctoolkit-four-loads-asm-measurements

four-loads-odd:
	GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 /usr/bin/time -f "Elapsed Time , %e, system, %S, user, %U, memory, %M" /home/msasongko17/Documents/amd_with_signal/hpctoolkit-bin/bin/hpcrun -e WP_AMD_COMM -e IBS_OP@100003 ./four-loads-asm
	/home/msasongko17/Documents/amd_with_signal/hpctoolkit-bin/bin/hpcstruct ./four-loads-asm
	/home/msasongko17/Documents/amd_with_signal/hpctoolkit-bin/bin/hpcprof -S ./four-loads-asm.hpcstruct -o four-loads-asm_database hpctoolkit-four-loads-asm-measurements
	mkdir four-loads-odd
	mv four-loads-asm_database four-loads-odd
	rm -r ./four-loads-asm.hpcstruct hpctoolkit-four-loads-asm-measurements

