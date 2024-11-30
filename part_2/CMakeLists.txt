# Minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Project name and language
project(part_2 C)

# Set the C standard
set(CMAKE_C_STANDARD 11)

# Add the source files
set(SOURCES
        src/main.c
        src/character.c
        src/shiny.c
        src/armor.c
)

# Add the executable
add_executable(output ${SOURCES})

# Include the header files directory
include_directories(Include)
