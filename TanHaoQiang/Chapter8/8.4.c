//
// Created by 57054 on 2020/11/30.
//
#include "stdio.h"

void fun(int a[], int m, int n) {
    int i, t, j;
    for (i = 0; i < m; ++i) {
        t = a[n - 1];
        for (j = n - 1; j > 0; --j) {
            a[j] = a[j - 1];
        }
        a[j] = t;
    }
}

int main(void) {
    int a[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
    fun(a, 3, 10);
    for (int i = 0; i < 10; ++i) {
        printf("%d ", a[i]);
    }
    return 0;
}


