//
// Created by 57054 on 2020/12/18.
//
#include "stdio.h"

float fun(float p) {
    float res;
    res = p * p - 8 * p + 40;
    return res;
}

int main(void) {
    float min = fun(0);
    float mark1 = 0, mark2 = 0,cost;
    for (float i = 0.1; i <= 10;) {
        cost = fun(i);
        if (cost >= min) {
            mark1 = i;
            mark2 = i - 0.1;
            break;
        }
        if (cost < min)
            min = cost;
        i += 0.1;
    }
    mark1 = (mark1 + mark2) / 2;
    printf("%f %f", fun(mark1), mark1);
}