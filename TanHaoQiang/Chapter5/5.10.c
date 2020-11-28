//
// Created by 57054 on 2020/11/28.
//
#include "stdio.h"
int main(void) {
    float sum = 0;
    float a = 1, b = 2;
    for (int i = 0; i < 20; ++i) {
        sum += b / a;
        b = a + b;
        a = b - a;
    }
    printf("%f",sum);
    return 0;
}
