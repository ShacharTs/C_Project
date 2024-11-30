
CC = gcc
CFLAGS = -IInclude -Wall

SRC_DIR = src

# Source and Object Files
SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:.c=.o)

OUTPUT = main

all: $(OUTPUT)

$(OUTPUT): $(OBJS)
	echo "Linking object files"
	$(CC) $(OBJS) -o $(OUTPUT).exe
	$(CC) $(OBJS) -o $(OUTPUT).out


$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	echo "Compiling all source files to object files"
	$(CC) $(CFLAGS) -c $< -o $@

# Clean Up
clean:
	del /Q $(SRC_DIR)\*.o
	del /Q *.o *.exe *.out


