//
// Created by 57054 on 2020/10/12.
//
#include <stdio.h>

int arrage(int *a, int count, int n, int m) {
    int k, temp;
    for (int i = n - 1; i < n + m - 2; ++i) {
        k = i;
        for (int j = i + 1; j < n + m - 1; ++j) {
            if (a[k] < a[j]) {
                k = j;
            }
        }
        if (k != i) {
            temp = a[k];
            a[k] = a[i];
            a[i] = temp;
        }
    }
}

int main(void) {
    int i, a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    arrage(a, 10, 3, 5);
    for (i = 0; i < 10; ++i) {
        printf("%3d", a[i]);
    }
}
