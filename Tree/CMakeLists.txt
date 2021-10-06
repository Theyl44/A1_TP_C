cmake_minimum_required(VERSION 3.7)
project(Implementation C)

set(CMAKE_C_STANDARD 99)

add_executable(Implementation main.c tree.c list.o queueList.o list.h queueList.h)