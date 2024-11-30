CC = gcc
FLAGS = -Wall -fPIC

.PHONY: all clean

all: main.exe main.out

main.exe: main.o advmath.dll
	$(CC) main.o -L. -ladvmath -o main.exe

main.out: main.o advmath.dll
	$(CC) main.o -L. -ladvmath -o main.out

advmath.dll: advmath.o
	$(CC) -shared -o advmath.dll advmath.o

main.o: main.c
	$(CC) $(FLAGS) -c main.c -o main.o

advmath.o: advmath.c
	$(CC) $(FLAGS) -c advmath.c -o advmath.o

clean:
	del /Q *.o *.exe *.dll
