//
// Created by 57054 on 2020/11/28.
//
#include "stdio.h"
#include "math.h"

int main(void) {
    float a;
    float x, x1;
    scanf("%f", &a);
    x = a / 2;
    x1 = (x + a / x) / 2;
    while (fabs(x1 - x) > 1e-5) {
        x = x1;
        x1 = (x + a / x) / 2;
    }
    printf("%f", x1);
    return 0;
}
