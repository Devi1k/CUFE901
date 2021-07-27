//
// Created by 57054 on 2020/12/16.
//
#include "stdio.h"

#define N 10

int main(void) {
    int a[N + 1];
    for (int i = 1; i <= N; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= N; ++i) {
        if (a[i] < 0) {
            a[0] = a[i];
            for (int j = i; j > 0; --j) {
                a[j] = a[j - 1];
            }
        }
    }
    for (int i = 1; i < N+1; ++i) {
        printf("%d ",a[i]);
    }
    return 0;
}
