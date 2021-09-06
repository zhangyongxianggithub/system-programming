//
// Created by zyx on 2021/9/2.
//
#include <stdio.h>

void print() {
    extern int extern_integer;
    extern_integer++;
    printf("method: %d\n", extern_integer);
}

int main() {
    int extern_integer;
    printf("Hello, World!!, 这是我的第一个C语言程序\n");
    print();
    extern_integer++;
    printf("main: %d\n", extern_integer);
    print();
    return 0;
}
