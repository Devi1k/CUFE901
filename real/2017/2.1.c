//
// Created by 57054 on 2020/10/27.
//
#include "stdio.h"
#include "math.h"

#define N 101

int main(void) {
    int i, j, line, a[N];
    for (i = 2; i < N; ++i) {
        a[i] = i;
    }
    for (i = 2; i < N; ++i) {
        for (j = i + 1; j < N; ++j) {
            if (a[j] != 0 && a[i] != 0)
                if (a[j] % a[i] == 0)
                    a[j] = 0;
        }
    }
    for (i = 2,line = 0; i < N; ++i) {
        printf("%5d",a[i]);
    }
}
