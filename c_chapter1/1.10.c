//
// Created by zyx on 2021/9/4.
//
#include "stdio.h"

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        } else if (c == ' ') {
            printf("\\b");
        } else if (c == '\\') {
            printf("\\\\");
        } else {
            putchar(c);
        }
    }
}
