#include <stdio.h>
#include <ctype.h>
#define SIZE 10
#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;
int getch(void)
{
    char ch = bufp > 0 ? buf[--bufp] : getchar();
    printf("input char %c\n", ch);
    return ch;
}

void ungetch(int c)
{
    if (bufp >= BUFSIZE)
    {
        printf("ungetch: too many characters\n");
    }
    else
    {
        buf[bufp++] = c;
    }
}

/*getint函数，将输入中的下一个整形赋值给*pn*/
int getint(int *pn)
{
    int c, sign;
    while (isspace(c = getchar()))
        ; /*跳过空白字符*/
    if (!isdigit(c) && c != EOF && c != '+' && c != '-')
    {
        // ungetch(c); /*输入不是一个数字或者不是一个有效的字符*/
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getchar();
    for (*pn = 0; isdigit(c); c = getchar())
    {
        *pn = 10 * *pn + (c - '0');
    }
    *pn *= sign;
    // if (c != EOF)
    //     ungetch(c);
    return c;
}
int main()
{
    int n, array[SIZE];
    for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
        printf("array[%d]=%d\n", n, array[n]);
}
