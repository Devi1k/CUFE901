//
// Created by 57054 on 2020/10/20.
//
#include "stdio.h"

#define m 2

void fun(int a[m][m], int b[m][m], int c[m][m]);

int main(void) {
    int a[m][m], b[m][m], c[m][m];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d%d", &a[i][j], &b[i][j]);
        }
    }
    fun(a, b, c);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%3d", b[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%3d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}


void fun(int a[m][m], int b[m][m], int c[m][m]) {
    int s;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            s = 0;
            for (int k = 0; k < m; ++k) {
                s += a[i][k] * b[k][j];
            }
            c[i][j] = s;
        }
    }
}
