#include<stdio.h>
int g = 100;
int h;
static int s;
extern int mysum(int,int);
int main1(int argc, char *atgv[])
{
    int a = 1;
    int b;
    static int c = 3;
    b = 2;
    c = mysum(a, b);
    printf("sum=%d\n", c);
}