cmake_minimum_required(VERSION 3.20)
project(c_chapter1 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(c_chapter1
        helloword.c)
