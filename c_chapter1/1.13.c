//
// Created by zyx on 2021/9/4.
//
#include "stdio.h"

int main() {
    int wc[20], c, l = 0;
    for (int i = 0; i < 20; i++) {
        wc[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == ' ' || c == '\n') {
            if (l > 0) {
                ++wc[l];
                l = 0;
            }
        } else {
            ++l;
        }
    }
    for (int i = 1; i < 20; i++) {
        printf("%2d %6d\n", i, wc[i]);
    }
}
