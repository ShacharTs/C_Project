output: main.o other.o
	g++ main.o other.o -o output

main.o: main.c
	g++ -c main.c

other.o: other.c other.h
	g++ -c other.c

clean:
	del /Q *.o output
