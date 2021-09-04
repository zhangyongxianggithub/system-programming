//
// Created by zyx on 2021/9/4.
//
#include "stdio.h"

int main() {
    int c, last_c = 'a';
    while ((c = getchar()) != EOF) {
        if (c != ' ' || last_c != ' ') {
            putchar(c);
        }
        last_c = c;
    }
}

