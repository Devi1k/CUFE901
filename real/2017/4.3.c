//
// Created by 57054 on 2020/10/27.
//
#include "stdio.h"

int a[5][5], c[5][5];

void zc(int b[][5], int n) {
    int i, j;
    int (*p)[5];
    p = c;
    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 5; ++j) {
            *(*(p + i) + j) = *(*(b + j) + i);
        }
    }
}

int main(void) {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            *(*(a + i) + j) = 2 * i + 5 * j;
        }
    }
    return 0;
}
