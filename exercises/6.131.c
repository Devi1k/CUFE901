//
// Created by 57054 on 2020/10/16.
//
#include <stdio.h>

int main(void) {
    int a[10][10], i, j, k = 0, m, n;
    printf("Enter n:\n");
    scanf("%d", &n);
    if (n % 2 == 0)
        m = n / 2;
    else
        m = n / 2 + 1;
    for (i = 0; i < m; ++i) {
        for (j = i; j < n - i; ++j) {
            k++;
            a[i][j] = k;
        }
        for (j = i + 1; j < n - i; ++j) {
            k++;
            a[j][n - i - 1] = k;
        }
        for (j = n - i - 2; j >= i; --j) {
            k++;
            a[n - i - 1][j] = k;
        }
        for (j = n - i - 2; j > i; --j) {
            k++;
            a[j][i] = k;
        }
    }

    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
}
