//
// Created by 57054 on 2020/12/1.
//
#include "stdio.h"

#define M 5

void fun(int a[][M]) {
    int *pmax, *pmin, temp;
    pmax = pmin = a[0];
    //最大最小值
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            if (*pmax < a[i][j])
                pmax = &a[i][j];
            if (*pmin > a[i][j])
                pmin = &a[i][j];
        }
    }
    temp = a[2][2];
    a[2][2] = *pmax;
    *pmax = temp;

    temp = a[0][0];
    a[0][0] = *pmin;
    *pmin = temp;

    //次小值
    pmin = &a[0][1];
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            if (i != 0 && j != 0 && *pmin > a[i][j])
                pmin = &a[i][j];
        }
    }
    temp = a[0][4];
    a[0][4] = *pmin;
    *pmin = temp;
    //第三小
    pmin = &a[0][1];
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            if (a[i][j] != a[0][0] && a[i][j] != a[0][4] && *pmin > a[i][j])
                pmin = &a[i][j];
        }
    }
    temp = a[4][0];
    a[4][0] = *pmin;
    *pmin = temp;
    //第四小
    pmin = &a[0][1];
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            if (a[i][j] != a[0][0] && a[i][j] != a[0][4] && a[i][j] != a[4][0] && *pmin > a[i][j])
                pmin = &a[i][j];
        }
    }
    temp = a[4][4];
    a[4][4] = *pmin;
    *pmin = temp;
}

int main(void) {
    int a[M][M];
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            printf("%4d ",a[i][j]);
        }
        printf("\n");
    }
    fun(a);
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            printf("%4d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}


