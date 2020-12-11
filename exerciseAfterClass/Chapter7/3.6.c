//
// Created by 57054 on 2020/10/30.
//
#include "stdio.h"

#define N 3
#define M 4

int fun(int (*p)[M], int saleSum[], int s[]) {
    int sum, mark = 0;
    for (int i = 0; i < N; ++i) {
        sum = 0;
        for (int j = 0; j < M; ++j) {
            sum += *(*(p + i) + j);
        }
        saleSum[i] = sum;
    }
    for (int i = 1; i < N - 1; ++i) {
        if (saleSum[mark] < saleSum[i])
            mark = i;
    }
    for (int i = 0; i < M; ++i) {
        s[i] = 0;
        for (int j = 1; j < N; ++j) {
            if (*(*(p + s[i]) + i) < *(*(p + j) + i))
                s[i] = j;
        }
    }
    return mark+1;
}

int main(void) {
    int sale[N][M], s[M], saleSum[N];
    int (*p)[M], mark;
    p = sale;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf("%d", &sale[i][j]);
        }
    }
    mark = fun(p, saleSum, s);
    for (int i = 0; i < N; ++i) {
        printf("%4d", saleSum[i]);
    }
    puts(" ");
    for (int i = 0; i < M; ++i) {
        printf("%4d", s[i] + 1);
    }
    puts(" ");
    printf("%d", mark);
    return 0;
}
