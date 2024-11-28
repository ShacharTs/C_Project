

all: main.o libmathlib.a advmath.dll
		g++ main.o -L. -lmathlib -ladvmath -o main.exe

libmathlib.a: mathlib.o
		ar rcs libmathlib.a mathlib.o

advmath.dll: advmath.o
		g++ -shared -o advmath.dll advmath.o

main.o: main.c mathlib.h advmath.h
		g++ -c main.c -o main.o

mathlib.o: mathlib.c mathlib.h
		g++ -c mathlib.c -o mathlib.o

advmath.o: advmath.c advmath.h
		g++ -c advmath.c -o advmath.o

clean:
		del /Q *.o
