//
// Created by zyx on 2021/9/4.
//
#include "stdio.h"

#define MAXLINE 1000
#define LONGLINE 10

extern int get_line(char line[], int maxline);

int main() {
    char line[MAXLINE];
    int len;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > LONGLINE) {
            printf("%s", line);
        }
    }
    return 0;
}
