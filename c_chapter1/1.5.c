//
// Created by zyx on 2021/9/3.
//
#include<stdio.h>

int main() {
    for (float fahr = 300; fahr >= 0; fahr -= 20) {
        printf("%3.0f  %6.1f\n", fahr, 5.0 / 9.0 * (fahr - 32.0));
    }
}

