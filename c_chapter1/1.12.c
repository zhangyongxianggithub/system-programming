//
// Created by zyx on 2021/9/4.
//
#include "stdio.h"

#define INSIDE 1
#define OUTSIDE 0

int main() {
    int c;
    int state = OUTSIDE;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == INSIDE) {
                state = OUTSIDE;
                putchar('\n');
            }
        } else {
            putchar(c);
            if (state == OUTSIDE) {
                state = INSIDE;
            }
        }
    }
}

