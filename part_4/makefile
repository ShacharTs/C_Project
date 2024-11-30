
CC = gcc
# Include current directory for headers
CFLAGS = -Wall -I.
# Linker flags: shared library and math library
LDFLAGS = -L. -ladvmath -lm

all: main

# Build the final executable
main: main.o libadvmath.dll
	echo "Linking object files"
	$(CC) main.o $(LDFLAGS) -o main.exe
	$(CC) main.o $(LDFLAGS) -o main.out

# Create the shared library
libadvmath.dll: advmath.o
	echo "Creating shared library 'libadvmath.dll'"
	$(CC) -shared -o libadvmath.dll advmath.o

# Compile main.c into main.o
main.o: main.c
	echo "Compiling main.c"
	$(CC) $(CFLAGS) -c main.c -o main.o

# Compile advmath.c into advmath.o
advmath.o: advmath.c
	echo "Compiling advmath.c"
	$(CC) $(CFLAGS) -c advmath.c -o advmath.o

clean:
	del /Q *.o *.exe *.out *.dll
