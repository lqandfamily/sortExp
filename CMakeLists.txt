cmake_minimum_required(VERSION 3.15)
project(sortExp C)

set(CMAKE_C_STANDARD 99)

add_executable(sortExp main.c SortHeap.h SortHeapImpl.c)