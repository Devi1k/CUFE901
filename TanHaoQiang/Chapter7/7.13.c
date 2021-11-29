//
// Created by 57054 on 2020/11/29.
//
#include "stdio.h"

float pn(int x, int n) {
    float res;
    if (n == 0)
        res = 1;
    else if (n == 1)
        res = x;
    else
        res = ((2 * n - 1) * x - pn(x, n - 1) - (n - 1) * pn(x, n - 2)) / n;
    return res;
}


int main(void) {
    printf("%f", pn(4, 3));
}