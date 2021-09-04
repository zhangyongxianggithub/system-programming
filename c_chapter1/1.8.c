//
// Created by zyx on 2021/9/4.
//
#include "stdio.h"

int main() {
    int c, ns = 0, nt = 0, nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')++ns;
        if (c == '\t')++nt;
        if (c == '\n')++nl;
    }
    printf("%d, %d, %d", ns, nt, nl);
}

