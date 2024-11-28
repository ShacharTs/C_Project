all: main.o libmathlib.a
	g++ main.o -L. -lmathlib -o main

libmathlib.a: mathlib.o
	ar rcs libmathlib.a mathlib.o

main.o: main.c
	g++ -c main.c

mathlib.o: mathlib.c mathlib.h
	g++ -c mathlib.c

clean:
	del /Q *.o *.a main
