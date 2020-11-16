//
// Created by 57054 on 2020/10/29.
//

#include "stdio.h"

int main(void) {
    int m[16], n, i, t, count = 0;
    long a, k;
    printf("Res:\n");
    for (n = 10; n < 200; ++n) {
        k = 0;
        t = 1;
        a = n * n;
        for (i = 1; a != 0; ++i) {
            m[i] = a % 10;
            a /= 10;
        }
        for (; i > 1; --i) {
            k += m[i - 1] * t;
            t *= 10;
        }
        if (k == n * n)
            printf("%2d:%10d  %10d\n", ++count, n, n * n);
    }
    return 0;
}