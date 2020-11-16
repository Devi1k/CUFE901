//
// Created by 57054 on 2020/11/10.
//
#include "stdio.h"

#define N 10
#define M 5

void sort(float a[N][M + 1]) {
    float (*p)[M + 1];
    float (*temp)[M + 1];
    p = a;
    float sum;
    for (int i = 0; i < N; ++i) {
        sum = 0;
        for (int j = 0; j < M; ++j) {
            sum += p[i][j];
        }
        p[i][M] = sum / M;
    }

    int k;
    for (int i = 0; i < N - 1; ++i) {
        k = i;
        for (int j = i + 1; j < N; ++j) {
            if (p[k][M] < p[j][M])
                k = j;
        }
        if(k!=i){


        }
    }
}

int main(void) {
    float a[N][M + 1];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf("%f", &a[i][j]);
        }
    }
    sort(a);


}