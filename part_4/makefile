# Define the compiler and flags
CC = gcc
FLAGS = -Wall

# Main target: Build everything
all: prog

# Build the final executable "prog.exe"
prog: main.o libadvmath.dll
	$(CC) main.o -L. -ladvmath -lm -o prog.exe
# -L. tells the compiler to look for the shared library in the current directory
# -ladvmath links with libadvmath.dll

# Compile "main.c" into an object file "main.o"
main.o: main.c
	$(CC) $(FLAGS) -c main.c

# Create the shared library "libadvmath.dll" from "advmath.o"
libadvmath.dll: advmath.o
	$(CC) $(FLAGS) -shared -o libadvmath.dll advmath.o
# -shared creates a shared library (DLL)

# Compile "advmath.c" into an object file "advmath.o"
advmath.o: advmath.c
	$(CC) $(FLAGS) -lm -c advmath.c -o advmath.o
# -lm links the math library when compiling this file

# Clean up all generated files
clean:
	rm -f prog.exe main.o advmath.o libadvmath.dll

# Mark "all" and "clean" as "phony" targets
.PHONY: all clean
