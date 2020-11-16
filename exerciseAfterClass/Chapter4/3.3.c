//
// Created by 57054 on 2020/10/28.
//

#include "stdio.h"

int main(void) {
    float up, down;
    float res, sum;
    up = 2, down = 1;
    sum = res = up / down;
    for (int i = 0; i < 20; ++i) {
        up = up + down;
        down = up - down;
        res = up / down;
        printf("%.0f/%.0f ", up, down);
        sum += res;
    }
    printf("%.2f", sum);
    return 0;
}