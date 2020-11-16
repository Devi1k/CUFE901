//
// Created by 57054 on 2020/10/21.
//
#include "stdio.h"

#define N 9

void sort(int a[]) {
    int temp;
    int k;
    for (int i = 0; i < N-1; ++i) {
        if ((i + 1) % 2 != 0) {
            k = (i + 1) / 2;
            for (int j = k; j < N; ++j) {
                if (a[k] < a[j]) {
                    k = j;
                }
            }
            if (k != (i + 1) / 2) {
                temp = a[(i + 1) / 2];
                a[(i + 1) / 2] = a[k];
                a[k] = temp;
            }
        } else {
            k = N - (i + 1) / 2;
            for (int j = k; j >= (i + 1) % 2; --j) {
                if (a[k] > a[j]) {
                    k = j;
                }
            }
            if (k != (N - (i + 1) / 2)) {
                temp = a[N - (i + 1) / 2];
                a[N - (i + 1) / 2] = a[k];
                a[k] = temp;
            }
        }
    }
}

int main(void) {
    int a[N] = {65,98,7,45,321,46,9,10,6};
    sort(a);
    for (int i = 0; i < N; ++i) {
        printf("%3d", a[i]);
    }
    return 0;
}



