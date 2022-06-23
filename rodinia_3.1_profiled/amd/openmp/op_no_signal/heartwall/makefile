
ifdef OUTPUT
override OUTPUT = -DOUTPUT
endif

# link objects(binaries) together
heartwall: main.o cpu_check.o  ./AVI/avilib.o ./AVI/avimod.o
	gcc main.o cpu_check.o  ./AVI/avilib.o ./AVI/avimod.o -lm -fopenmp -o heartwall

# compile main function file into object (binary)
main.o: main.c define.c kernel.c
	gcc $(OUTPUT) main.c -I./AVI -c -O0 -fopenmp

cpu_check.o: cpu_check.c cpu_check.h
	gcc cpu_check.c -c -O0

./AVI/avilib.o ./AVI/avimod.o:
	cd AVI; make;

# delete all object files
clean:
	rm -f *.o AVI/*.o heartwall
