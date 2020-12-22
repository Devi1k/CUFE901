//
// Created by 57054 on 2020/10/27.
//
#include "stdio.h"
#include "math.h"

double k(int i) {
    double x = 1;
    for (int j = 1; j <= i; ++j) {
        x *= j;
    }
    return x;
}

int main(void) {
    double sum = 1;
    int x;
    int t = -1;
    scanf("%d", &x);
    for (int i = 1; i <= 20; ++i) {
        sum += t * pow(x, 2 * i) / k(2 * i);
        t = -t;
    }
    printf("%lf", sum);
    return 0;
}
