//
// Created by zyx on 2021/9/3.
//
#include<stdio.h>
int main(){
    //果紧跟的字符不是定义好的转义字符，则输出的行为根据编译器会不同
    printf("\\c test \c");
}
