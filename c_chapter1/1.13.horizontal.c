//
// Created by zyx on 2021/9/4.
//
#include "stdio.h"

#define MAXHIST 15 //max length of histogram
#define MAXWORD 11 // max length of a word

/**
 * print horizontal histogram
 */
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
    for (i = 1; i < MAXWORD; i++) {
        printf("%5d - %5d: ", i, wl[i]);
        if (wl[i] > 0) {
            if ((len = wl[i] * MAXHIST / maxvalue) <= 0)len = 1;
        }
        while (len > 0) {
            putchar('*');
            --len;
        }
        putchar('\n');
    }
    if (ovflow > 0) {
        printf("there are %d words >= %d\n", ovflow, MAXWORD);
    }
}

