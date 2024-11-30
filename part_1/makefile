
CC = gcc
all : output

output: main.o other.o
	echo "Linking all together"
	$(CC)  main.o other.o -o output
	$(CC)  main.o other.o -o output.out

main.o: main.c
	echo "Compiling main.c"
	$(CC) -c main.c

other.o: other.c
	echo "Compiling other.c"
	$(CC) -c other.c

clean:
	echo "Delete object files and executable "
	del /Q *.o *.exe *.out
