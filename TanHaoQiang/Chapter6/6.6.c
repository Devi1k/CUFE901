//
// Created by 57054 on 2020/11/28.
//
#include "stdio.h"

#define M 10

int main(void) {
    int a[M][M];
    for (int i = 0; i < M; ++i) {
        a[i][0] = 1;
        for (int j = 0; j < i; ++j) {
            a[i][j] = 1;
        }
    }
    for (int i = 2; i < M; ++i) {
        for (int j = 1; j < i - 1; ++j) {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
