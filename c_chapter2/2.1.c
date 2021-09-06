//
// Created by zyx on 2021/9/5.
//
#include "stdio.h"
#include "limits.h"
#include "float.h"

void print_limit(void);

void print_limit_non_std(void);

int main() {
    printf("print limit by limit head file\n");
    print_limit();
    printf("print limit by computed\n");
    print_limit_non_std();

}

void print_limit() {
    printf("signed char min %d\n", SCHAR_MIN);
    printf("signed char max %d\n", SCHAR_MAX);
    printf("unsigned char max %u\n", UCHAR_MAX);

    printf("signed short min %d\n", SHRT_MIN);
    printf("signed short max %d\n", SHRT_MAX);
    printf("unsigned short max %u\n", USHRT_MAX);

    printf("signed int min %d\n", INT_MIN);
    printf("signed int max %d\n", INT_MAX);
    printf("unsigned int max %u\n", UINT_MAX);

    printf("signed long min %ld\n", LONG_MIN);
    printf("signed long max %ld\n", LONG_MAX);
    printf("unsigned long max %lu\n", ULONG_MAX);
}

void print_limit_non_std() {
    printf("signed char min %d\n", -(char) ((unsigned char) ~0 >> 1) - 1);
    printf("signed char max %d\n", (char) ((unsigned char) ~0 >> 1));
    printf("unsigned char max %u\n", (unsigned char) ~0);

    printf("signed short min %d\n", SHRT_MIN);
    printf("signed short max %d\n", SHRT_MAX);
    printf("unsigned short max %u\n", USHRT_MAX);

    printf("signed int min %d\n", INT_MIN);
    printf("signed int max %d\n", INT_MAX);
    printf("unsigned int max %u\n", UINT_MAX);

    printf("signed long min %ld\n", LONG_MIN);
    printf("signed long max %ld\n", LONG_MAX);
    printf("unsigned long max %lu\n", ULONG_MAX);
}
