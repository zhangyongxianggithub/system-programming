//
// Created by zyx on 2021/9/3.
//
#include<stdio.h>

int main() {
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20.0;
    celsius = lower;
    printf("华氏温度与摄氏温度转换表\n");
    while (celsius <= upper) {
        fahr = celsius * 9.0 / 5.0 + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
}

