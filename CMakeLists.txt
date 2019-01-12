cmake_minimum_required(VERSION 3.13)
project(learnDataStructure C)

set(CMAKE_C_STANDARD 11)

add_executable(learnDataStructure main.c test/test.c list/slist.c list/sequencelist.c function.h stack/linkedstack.c stack/arraystack.c stack/stacktest1.c)