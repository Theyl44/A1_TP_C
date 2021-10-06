cmake_minimum_required(VERSION 3.7)
project(Compilation_2 C)

set(CMAKE_C_STANDARD 99)

add_executable(Compilation_2 main.c list.o list.h stackArray.c stackArray.h)