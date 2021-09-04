//
// Created by zyx on 2021/9/4.
//
#include "stdio.h"
#include "ctype.h"

#define MAX_HIST 15

int main() {
    int c, max_value, len, cl[128];
    for (int i = 0; i < 128; i++) {
        cl[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        ++cl[c];
    }
    max_value = 0;
    for (int i = 0; i < 128; i++) {
        if (cl[i] > max_value) {
            max_value = cl[i];
        }
    }
    for (int i = 1; i < 128; i++) {
        if (isprint(i)) {
            printf("%5d - %c - %5d: ", i, i, cl[i]);
        } else {
            printf("%5d -   - %5d", i, cl[i]);
        }
        if (cl[i] > 0) {
            if ((len = cl[i] * MAX_HIST / max_value) <= 0) { len = 1; }
        }
        while (len > 0) {
            putchar('*');
            --len;
        }
        putchar('\n');
    }
}
