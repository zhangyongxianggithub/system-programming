//
// Created by zyx on 2021/9/4.
//
#include "stdio.h"

int main() {
    int last_c, c, nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
        last_c = c;
    }
    if (last_c != '\n') {
        ++nl;
    }
    printf("%d\n", nl);
}
