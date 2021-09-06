//
// Created by zyx on 2021/9/6.
//
#include "stdio.h"
/**
 * 经典的二分查找算法
 * @param x
 * @param v
 * @param n
 * @return
 */
int binsearch(int x, int v[], int n) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (x < v[mid])high = mid - 1;
        else if (x > v[mid])low = mid + 1;
        else return mid;
    }
    return -1;
}

int main() {

}

