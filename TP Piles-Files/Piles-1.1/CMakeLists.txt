cmake_minimum_required(VERSION 3.7)
project(Compilation C)

set(CMAKE_C_STANDARD 99)

add_executable(Compilation main.c list.o stackList.c)