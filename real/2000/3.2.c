//
// Created by 57054 on 2020/11/15.
//

#include "stdio.h"

#define MAXN 100
int a[MAXN];

void rd(int n, int k) {
    int j, i;
    for (j = n; j >= 1; --j) {
        a[k] = j;
        if (a[k] == n && a[k] <= a[k - 1]) {
            printf("%d = %d", a[0], a[1]);
            for (i = 2; i <= k; ++i) {
                printf("+%d", a[i]);
            }
            printf("\n");
        } else
            rd(n - a[k], k + 1);
    }
}

int main(void){
    int i;
    a[0] = 3;
    rd(3,1);
}

