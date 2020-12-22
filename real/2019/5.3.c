//
// Created by 57054 on 2020/12/21.
//
#define N 3
#define M 4

#include "stdio.h"

int main(void) {
    double price[N][M];
    double (*p)[M], average[M], sum;
    double max, min;
    int row1, row2, column;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf("%lf", &price[i][j]);
        }
    }
    p = price;
    // 1
    for (int i = 0; i < M; ++i) {
        sum = 0;
        for (int j = 0; j < N; ++j) {
            sum += *(*(p + j) + i);
        }
        average[i] = sum / N;
    }
    for (int i = 0; i < M; ++i) {
        printf("%.2lf ", average[i]);
    }
    puts(" ");
    //2
    for (int i = 0; i < M; ++i) {
        max = min = *(*p + i);
        row1 = row2 = 1;
        column = i + 1;
        for (int j = 0; j < N; ++j) {
            if (max < *(*(p + j) + i)) {
                max = *(*(p + j) + i);
                row1 = j + 1;
            }
            if (min > *(*(p + j) + i)) {
                min = *(*(p + j) + i);
                row2 = j + 1;
            }

        }
        printf("No.%d book,the highest price is %lf in No.%d shop, the lowest price is %lf in the No.%d shop\n",
               column, max, row1, min, row2);
    }
}
