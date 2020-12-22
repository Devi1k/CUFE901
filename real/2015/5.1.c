//
// Created by 57054 on 2020/10/20.
//
#include "stdio.h"

int sum(int n) {
    static int sum = 0;
    sum += n;
    return sum;
}
int main(void) {
    float s = 0;
    for (int i = 1; i <= 50; ++i) {
        s += 1.0 / sum(i);
    }
    printf("%.2f", s);
    return 0;
}