//
// Created by 57054 on 2020/11/2.
//
#include "stdio.h"

#define N 3
#define M 4

int *max(int a[][M]) {
    int (*p)[M];
    p = a;
    int mark = 0, sum, max = 0;
    for (int i = 0; i < N; ++i) {
        sum = 0;
        for (int j = 0; j < M; ++j) {
            sum += *(*(p + i) + j);
        }
        if (max < sum) {
            max = sum;
            mark = i;
        }
    }
    return *(p + mark);
}

int main(void) {
    int num[N][M];
    int *res;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf("%d", &num[i][j]);
        }
    }
    res = max(num);
    for (int i = 0; i < M; ++i) {
        printf("%d  ", *(res + i));
    }
    return 0;
}
