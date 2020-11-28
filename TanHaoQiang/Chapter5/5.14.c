//
// Created by 57054 on 2020/11/28.
//
#include "stdio.h"
#include "math.h"

int main(void) {
    float x = 1.5;
    float x1, f, f1;
    f = ((2 * x - 4) * x + 3) * x - 6;
    f1 = (6 * x - 8) * x + 3;
    x1 = x - f / f1;
    while (fabs(x1 - x) > 1e-5) {
        x = x1;
        f = ((2 * x - 4) * x + 3) * x - 6;
        f1 = (6 * x - 8) * x + 3;
        x1 = x - f / f1;
    }
    printf("%f", x1);
    return 0;
}
