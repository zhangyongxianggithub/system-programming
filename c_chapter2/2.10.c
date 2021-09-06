//
// Created by zyx on 2021/9/6.
//
#include "stdio.h"

int lower(int);

int main() {
    printf("%c\n", lower('B'));
}

int lower(int letter) {
    return letter >= 'A' && letter <= 'Z' ? letter + 'a' - 'A' : letter;
}
