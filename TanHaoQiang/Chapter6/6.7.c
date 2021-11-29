//
// Created by 57054 on 2020/11/28.
//
#include "stdio.h"

#define M 10

int main(void) {
    int n, x, y, a[M][M] = {0}, k = 1;
    scanf("%d", &n);
    x = 0;
    y = n / 2;
    a[x][y] = 1;
    x--, y++;
    for (int i = 2; i <= n * n; ++i) {
        if (x < 0 && y == n) {
            x = 1;
            y = n - 1;
        } else if (x < 0 && y < n)
            x = n - 1;
        else if (y == n && x >= 0)
            y = 0;
        if (a[x][y] == 0)
            a[x][y] = i;
        else {
            x+=2;
            y--;
            a[x][y] = i;
        }
        x--, y++;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
