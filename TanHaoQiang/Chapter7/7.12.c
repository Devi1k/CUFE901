//
// Created by 57054 on 2020/11/29.
//
#include "stdio.h"
#include "math.h"

float Newton(float x, int a, int b, int c, int d) {
    float f, f1, x1;
    f = ((x * (a * x + b) + c) * x + d);
    f1 = x * (3 * a * x + 2 * b) + c;
    x1 = x - f / f1;
    while (fabs(x1 - x) > 1e-5) {
        x = x1;
        f = ((x * (a * x + b) + c) * x + d);
        f1 = x * (3 * a * x + 2 * b) + c;
        x1 = x - f / f1;
    }
    return x;
}


int main(void) {
    float x = Newton(1, 1, 2, 3, 4);
    printf("%f", x);
    return 0;
}
