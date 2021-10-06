cmake_minimum_required(VERSION 3.7)
project(TestList C)

set(CMAKE_C_STANDARD 99)

add_executable(TestList main.c queue.c queue.h list.c list.h)