//
// Created by 57054 on 2020/11/17.
//
#include "stdio.h"

int main(void) {
    int m, n;
    int t;
    scanf("%d%d", &m, &n);
    while (m - n != 0) {
        if (m > n) {
            t = m - n;
            m = n;
            n = t;
        } else {
            t = n - m;
            n = t;
            m = m;
        }
    }
    printf("gcd(m,n): = %d", m);
    return 0;
}
