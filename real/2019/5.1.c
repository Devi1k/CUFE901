//
// Created by 57054 on 2020/12/21.
//
#include "stdio.h"

double f1(int x, int n) {
    if (n == 1)
        return x;
    else
        return x * f1(x, n - 1);
}

double f2(int n) {
    if (n == 1)
        return 1;
    else
        return n * f2(n - 1);
}

int main(void) {
    double res = 1, x;
    int nmax;
    scanf("%d", &nmax);
    scanf("%lf", &x);
    for (int i = 1; i <= nmax; ++i) {
        res += f1(x,i) / f2(i);
    }
    printf("the result is : %lf", res);
    return 0;
}

