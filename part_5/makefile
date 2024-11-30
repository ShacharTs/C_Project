
CC = gcc
CFLAGS = -Wall -I../part_3 -I../part_4
LDFLAGS = -L../part_3 -L../part_4 -lmathlib -ladvmath -lm


OUTPUT = main.exe


SRCS = main.c
OBJS = $(SRCS:.c=.o)


all: $(OUTPUT)

# Link the final executable
$(OUTPUT): $(OBJS) ../part_3/libmathlib.a ../part_4/libadvmath.dll
	$(CC) $(OBJS) $(LDFLAGS) -o $(OUTPUT)
	copy ..\part_4\libadvmath.dll .

# Compile Source Files into Object Files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Build Static Library in part_3
../part_3/libmathlib.a:
	$(MAKE) -C ../part_3

# Build Dynamic Library in part_4
../part_4/libadvmath.dll:
	$(MAKE) -C ../part_4

# Clean Up
clean:
	del /Q *.o *.exe libadvmath.dll
	$(MAKE) -C ../part_3 clean
	$(MAKE) -C ../part_4 clean
