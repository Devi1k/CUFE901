//
// Created by 57054 on 2020/10/30.
//
#include "stdio.h"

void fun(int a[], int n, int *max, int *min) {
    for (int i = 0; i < n; ++i) {
        *max = *min = a[0];
        if (a[i] > *max)
            *max = a[i];
        if (a[i] < *min)
            *min = a[i];
    }
}

int main(void) {
    int a[3] = {3, 6, 7};
    int max, min;
    fun(a, 3, &max, &min);
    printf("%d %d", max, min);
    return 0;
}

