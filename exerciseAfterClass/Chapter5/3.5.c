//
// Created by 57054 on 2020/10/29.
//
#include "stdio.h"
float pn(int n, int x);
int main(void) {
    printf("%.2f",pn(3,5));
    return 0;
}

float pn(int n, int x) {
    float p;
    if (n < 0)
        p = -1;
    if (n == 0) {
        p = 1;
    } else if (n == 1) {
        p = x;
    } else
        p = (2 * n - 1) * x - pn(n - 1, x) - (n - 1) * pn(n - 2, x) / n;
    return p;
}

