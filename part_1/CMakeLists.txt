# Minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Project name
project(part_1 C)

# Set the C standard
set(CMAKE_C_STANDARD 11)

# Add the source files
set(SOURCES
        main.c
        other.c
)

# Add the executable
add_executable(output ${SOURCES})

# Include the header files directory (if needed)
include_directories(.)
