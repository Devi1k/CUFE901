//
// Created by 57054 on 2020/11/28.
//
#include "stdio.h"

int main(void) {
    float sum = 0, init = 100;
    for (int i = 0; i < 10; ++i) {
        sum += init + init / 2;
        init /= 2;
    }
    printf("%f\n", sum);
    printf("%f",init);
    return 0;
}