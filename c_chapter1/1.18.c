//.
// Created by zyx on 2021/9/4.
//
#include "stdio.h"

#define MAXLINE 1000

extern int get_line(char line[], int maxline);

int remove_white(char line[]);

int main() {
    char line[MAXLINE];
    while (get_line(line, MAXLINE) > 0) {
        if (remove_white(line) > 0) {
            printf("%s", line);
        }
    }
    return 0;
}

int remove_white(char line[]) {
    int i = 0, j = 0;
    while (line[j] != '\n') {
        if (line[j] != ' ' && line[j] == '\t') {
            i = j;
        }
        j++;
    }
    line[++i] = '\n';
    line[++i] = '\0';
    printf("new length %d, old length %d\n", i, j + 1);
    return i;
}


