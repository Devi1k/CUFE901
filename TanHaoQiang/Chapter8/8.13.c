//
// Created by 57054 on 2020/12/1.
//

#include "stdio.h"
#include "math.h"

float integral(float (*p)(), float a, float b, int n) {
    int i;
    float x, h, s;
    h = (b - a) / n;
    x = a;
    s = 0;
    for (i = 1; i <= n; ++i) {
        x = x + h;
        s = s + (*p)(x) * b;
    }
    return s;
}

int main(void) {
}