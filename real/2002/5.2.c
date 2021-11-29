//
// Created by 57054 on 2020/11/14.
//

#include "stdio.h"

#define N 7

int main(void) {
    int a[N], b[N] = {0};
    int n = 1, m = -32768, s = 0, k;
    for (int i = 0; i < N; ++i) {
        scanf("%d", &a[i]);
    }
    for (int j = 1; j < N; ++j) {
        if (a[j] > a[s])
            s = j;
    }
    while (m != a[s]) {
        k = s;
        for (int i = 0; i < N; ++i) {
            if (a[i] > m && a[i] < a[k])
                k = i;
        }
        b[k] = n;
        m = a[k];
        for (int i = 0; i < N; ++i) {
            if (a[i] == m)
                b[i] = n;
        }
        n++;
    }

    for (int i = 0; i < N; ++i) {
        printf("%d ", b[i]);
    }
    return 0;
}