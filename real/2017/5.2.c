//
// Created by 57054 on 2020/10/27.
//
#include "stdio.h"

int main(void) {
    double p, cost, p1, cost1;
    cost1 = 40;
    for (p = 0.1; p <= 10; ) {
        cost = 40 - 8 * p + p * p;
        if (cost >= cost1)
            break;
        cost1 = cost;
        p1 = p;
        p += 0.1;
    }
    p = (p + p1) / 2;
    printf("cost:%.2lf, p:%.2lf", cost, p);
    return 0;
}
