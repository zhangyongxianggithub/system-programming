//
// Created by zyx on 2021/9/4.
//
#include "stdio.h"

#define MAXHIST 15 //max length of histogram
#define MAXWORD 11 // max length of a word

int main() {
    int c, i, nc, state;
    int len; /* length of earch bar*/
    int maxvalue; /* max value for wl[]*/
    int ovflow; /*number of overflow words*/
    int wl[MAXWORD];/* word length counters */
    nc = 0;
    ovflow = 0;
    for (i = 0; i < MAXWORD; i++) {
        wl[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (nc > 0) {
                if (nc < MAXWORD) {
                    ++wl[nc];
                } else {
                    ++ovflow;
                }
                nc = 0;
            }
        } else {
            nc++;
        }
    }
    maxvalue = 0;
    for (i = 1; i < MAXWORD; i++) {
        if (wl[i] > maxvalue) {
            maxvalue = wl[i];
        }
    }
    for (i = MAXHIST; i > 0; i--) {
        for (int j = 1; j < MAXWORD; j++) {
            if (wl[j] * MAXHIST / maxvalue >= i) {
                printf("   * ");
            } else {
                printf("     ");
            }
        }
        putchar('\n');
    }
    for (i = 1; i < MAXWORD; ++i) {
        printf("%4d ", i);
    }
    putchar('\n');
    for (i = 1; i < MAXWORD; i++) {
        printf("%4d ", wl[i]);
    }
    putchar('\n');
    if (ovflow > 0) {
        printf("there are %d words >=%d\n", ovflow, MAXWORD);
    }
}

