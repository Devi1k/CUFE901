//
// Created by 57054 on 2020/12/1.
//
#include "stdio.h"

#define M 5

void fun(int a[][M]) {
    int max, max2, max3, max4, max5;
    int temp;
    int row, column;
    row = column = 0;
    max = a[0][0];
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            if (max < a[i][j]) {
                max = a[i][j];
                row = i;
                column = j;
            }
        }
    }
    temp = a[2][2];
    a[2][2] = a[row][column];
    a[row][column] = temp;

    //
    max2 = a[0][0];
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            if (max2 < a[i][j] && a[i][j] < max) {
                max2 = a[i][j];
                row = i;
                column = j;
            }
        }
    }
    temp = a[0][0];
    a[0][0] = a[row][column];
    a[row][column] = temp;
    max = max2;


    //
    max3 = 0;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            if (max3 < a[i][j] && a[i][j] < max) {
                max3 = a[i][j];
                row = i;
                column = j;
            }
        }
    }
    temp = a[0][4];
    a[0][4] = a[row][column];
    a[row][column] = temp;
    max = max3;

    //
    max4 = 0;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            if (max4 < a[i][j] && a[i][j] < max) {
                max4 = a[i][j];
                row = i;
                column = j;
            }
        }
    }
    temp = a[4][0];
    a[4][0] = a[row][column];
    a[row][column] = temp;
    max = max4;


    //
    max5 = 0;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            if (max5 < a[i][j] && a[i][j] < max) {
                max5 = a[i][j];
                row = i;
                column = j;
            }
        }
    }
    temp = a[4][4];
    a[4][4] = a[row][column];
    a[row][column] = temp;

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
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }
    fun(a);
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}


