# Compiler and Flags
CC = gcc
CFLAGS = -IInclude -Wall -Wextra

# Directories
SRC_DIR = src
INCLUDE_DIR = Include

# Source and Object Files
SRCS = $(SRC_DIR)/main.c $(SRC_DIR)/armor.c $(SRC_DIR)/character.c $(SRC_DIR)/shiny.c
OBJS = $(SRCS:.c=.o)

# Output Binary
OUTPUT = main

# Default Target
all: $(OUTPUT)

# Link Object Files
$(OUTPUT): $(OBJS)
	$(CC) $(OBJS) -o $(OUTPUT)

# Compile Source Files into Object Files
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(INCLUDE_DIR)/%.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean Up
clean:
	del /Q $(SRC_DIR)\*.o $(OUTPUT)

