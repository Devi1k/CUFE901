//
// Created by 57054 on 2020/11/9.
//
#include "stdio.h"

#define N 3

int main(void) {
    int m, n;
    int a[N][N] = {0};
    m = 0, n = N / 2;
    a[m][n] = 1;
    m--, n++;
    for (int i = 2; i <= N * N; ++i) {
        if (m < 0 && n == N) {
            m = 1;
            n = N - 1;
        } else if (m < 0 && n < N) {
            m = N - 1;
        } else if (m >= 0 && n == N) {
            n = 0;
        }
        if (a[m][n] == 0) {
            a[m][n] = i;
        } else {
            m += 2, n--;
            a[m][n] = i;
        }
        m--, n++;
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
