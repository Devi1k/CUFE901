//
// Created by 57054 on 2020/10/27.
//
#include "stdio.h"

int main(void) {
    double p, cost, p1, cost1;
    for (p = 0; p <= 10;p+=0.1) {
        cost = 40 - 8 * p + p * p;
        if (p <= 1e-6) {
            cost1 = cost;
            continue;
        }
        if (cost >= cost1)
            break;
        cost1 = cost;
        p1 = p;
    }
    p = (p+p1)/2;
    printf("cost:%.2lf, p:%.2lf",cost,p);
    return 0;
}
