//
// Created by 57054 on 2020/11/20.
//
#include "stdio.h"

#define M 10
int a[M][M] = {0};

void fun(int m) {
    int j, k;
    for (j = 0; j < m; ++j) {
        for (k = 0; k < m; ++k) {
            a[j][k] = j*k;
        }
    }
}

int main(void) {
    int n;
    scanf("%d",&n);
    fun(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
