#include <stdio.h>
/**
 * @brief 这是错误的用法，并不能实际交换2个变量的值
 *
 * @param x
 * @param y
 */
void swapUseVar(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swapUsePointer(int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}
int main()
{
    int x = 1, y = 2, z[10];
    int *ip;
    printf("x=%d,y=%d\n", x, y);
    ip = &x;
    printf("&-ip=%x, *-ip=%d\n", ip, *ip);
    *ip = 0;
    printf("&-ip=%x, *-ip=%d, x=%d\n", ip, *ip, x);
    ip = &z[0];
}
