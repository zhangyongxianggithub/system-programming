//
// Created by zyx on 2021/9/8.
//
#include "stdio.h"

#define MAXLINE 1000

char pattern[] = "ould";

int get_line(char line[], int max);

int strindex(char source[], char searchfor[]);

int main() {
    char line[MAXLINE];
    int found = 0;
    while (get_line(line, MAXLINE) > 0) {
        if (strindex(line, pattern) >= 0) {
            printf("%s", line);
            found++;
        }
    }
    return found;
}

int get_line(char line[], int max) {
    int c, i = 0;
    while (--max > 0 && (c = getchar()) != EOF && c != '\n') {
        line[i++] = c;
    }
    if (c == '\n') {
        line[i++] = c;
    }
    line[i] = '\0';
    return i;
}

int strindex(char source[], char searchfor[]) {
    int i, j, k;
    for (i = 0; source[i] != '\0'; i++) {
        for (j = i, k = 0; searchfor[k] != '\0' && source[j] == searchfor[k]; j++, k++);
        if (k > 0 && searchfor[k] == '\0') {
            return i;
        }
    }
    return -1;
}

int strrightindex(char source[], char searchfor[]) {
    int i, j, k, index = -1;
    for (i = 0; source[i] != '\0'; i++) {
        for (j = i, k = 0; searchfor[k] != '\0' && source[j] == searchfor[k]; j++, k++);
        if (k > 0 && searchfor[k] == '\0') {
            index = i;
        }
    }
    return index;
}


