//
// Created by 57054 on 2020/11/8.
//
#include "stdio.h"

#define M 3
#define N 4

void transpose(int a[M][N], int c[N][M]) {
    int (*p)[M];
    p = c;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            *(*(p+j)+i) = *(*(a+i)+j);
        }
    }
}

int main(void) {
    int a[M][N], c[N][M];
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("before:\n");
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    transpose(a, c);
    printf("after:\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            printf("%3d", c[i][j]);
        }
        printf("\n");
    }
}
