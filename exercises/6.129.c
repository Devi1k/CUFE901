//
// Created by 57054 on 2020/10/16.
#include <stdio.h>

int main(void) {
    int i, j, a[2][3], x = 2;
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 3; ++j) {
            a[i][j] = x;
            x += 2;
        }
    }
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 2; ++j) {
            printf("%3d",a[j][i]);
        }
        printf("\n");
    }
}

