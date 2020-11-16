//
// Created by 57054 on 2020/10/20.
//
#include "stdio.h"

int main(void) {
    int i, sum = 0;
    float s = 0;
    for (i = 1; i <= 50; ++i) {
//        sum += i;
//        s += 1.0 / sum;
        for (int j = 0; j <= i; ++j) {
            sum += j;
        }
        s += 1.0 / sum;
        sum = 0;
    }
    printf("%.2f", s);
    return 0;
}
