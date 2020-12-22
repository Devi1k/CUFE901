//
// Created by 57054 on 2020/11/6.
//
#include "stdio.h"
#include "stdlib.h"

void sort(int a[], int n) {
    int temp;
    for (int i = 0; i < n; ++i) {
        if ((i + 1) % 2) {
            for (int j = i / 2; j <= n - (i + 1) / 2 - 1; ++j) {
                if (a[j] > a[j + 1]) {
                    temp = a[j + 1];
                    a[j + 1] = a[j];
                    a[j] = temp;
                }
            }
        } else {
            for (int j = n - (i + 3) / 2; j >= (i + 1) / 2; --j) {
                if (a[j] < a[j - 1]) {
                    temp = a[j - 1];
                    a[j - 1] = a[j];
                    a[j] = temp;
                }
            }
        }

    }
}

int main(void) {
    int a[] = {6, 5, 32, 65, 987, 231, 145, 2, 4};
    for (int i = 0; i < 9; ++i) {
        printf("%d ", a[i]);
    }
    puts("\n");
    for (int i = 0; i < 9; ++i) {
        printf("%d ", a[i]);
    }
    return 0;
}
