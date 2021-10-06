cmake_minimum_required(VERSION 3.7)
project(Files2_2 C)

set(CMAKE_C_STANDARD 99)

add_executable(Files2_2 main.c list.o list.h queueArray.c queueArray.h)