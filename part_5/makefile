

all: main.o libmathlib.a advmath.dll
		gcc main.o -L. -lmathlib -ladvmath -o main.exe

libmathlib.a: mathlib.o
		ar rcs libmathlib.a mathlib.o

advmath.dll: advmath.o
		gcc -shared -o advmath.dll advmath.o

main.o: main.c mathlib.h advmath.h
		gcc -c main.c -o main.o

mathlib.o: mathlib.c mathlib.h
		gcc -c mathlib.c -o mathlib.o

advmath.o: advmath.c advmath.h
		gcc -c advmath.c -o advmath.o

clean:
		del /Q *.o
