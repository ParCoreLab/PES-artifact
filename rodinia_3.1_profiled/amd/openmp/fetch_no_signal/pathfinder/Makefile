CC = g++
SRC = pathfinder.cpp cpu_check.c
EXE = pathfinder
FLAGS = -fopenmp -O0

release:
	$(CC) $(SRC) $(FLAGS) -o $(EXE)

debug:
	$(CC) $(SRC) -g -Wall -o $(EXE)

clean:
	rm -f pathfinder


