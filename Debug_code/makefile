CC = gcc 
CFLAGS = -Wall -g # -g flag is used to enable debugging information


all: main

main : debug_main.o
	$(CC) $^ -o $@ -lm


clean:
	del /Q *.o *.exe