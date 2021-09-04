//
// Created by zyx on 2021/9/4.
//
#include "stdio.h"

#define MAXLINE 1000

extern int get_line(char line[], int maxline);

void reverse(char line[]);

int main() {
    char line[MAXLINE];
    while (get_line(line, MAXLINE) > 0) {
        reverse(line);
        printf("%s", line);
    }
    return 0;
}

void reverse(char line[]) {
    int i = 0, j = 0;
    char temp;
    while (line[i] != '\0')++i;
    --i;
    if (line[i] == '\n') {
        --i;
    }
    while (j < i) {
        temp = line[j];
        line[j] = line[i];
        line[i] = temp;
        j++;
        i--;
    }
}

