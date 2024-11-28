all: main.o advmath.dll
	g++ main.o -L. -ladvmath -o main.exe
	g++ main.o -L. -ladvmath -o main.out

advmath.dll: advmath.o
	g++ -shared -o advmath.dll advmath.o

main.o: main.c advmath.h
	g++ -c main.c

advmath.o: advmath.c advmath.h
	g++ -c advmath.c

clean:
	del /Q *.o  main.exe
