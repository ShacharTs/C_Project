
CC = gcc
CFLAGS = -Wall

all: main

main: main.o libmathlib.a
	echo "Linking object files"
	$(CC) main.o -L. -lmathlib -o main


libmathlib.a: mathlib.o
	echo "Creating static library"
	ar rcs libmathlib.a mathlib.o


main.o: main.c
	echo "Compiling main.c"
	$(CC) $(CFLAGS) -c main.c -o main.o


mathlib.o: mathlib.c mathlib.h
	echo "Compiling mathlib"
	$(CC) $(CFLAGS) -c mathlib.c -o mathlib.o


clean:
	del /Q *.o *.a *.exe *.out
