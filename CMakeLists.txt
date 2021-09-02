cmake_minimum_required(VERSION 3.20)
project(system-programming C)

set(CMAKE_C_STANDARD 11)

add_executable(system-programming chapter2/t1.c chapter2/t2.c c_chapter1/helloword.c c_chapter1/1.2.c c_chapter1/1.4.c c_chapter1/1.5.c c_chapter1/echo.c c_chapter1/1.6.c)
