//
// Created by 57054 on 2020/11/14.
//
#include "stdio.h"

int isPrime(int n);

int main(void) {
    int n, a;
    scanf("%d", &n);
    for (int i = 2; i < n; ++i) {
        if (isPrime(i)) {
            a = n - i;
            if (isPrime(a) && a >= i)
                printf("%d = %d + %d\n", n, i, a);
        }
    }
    return 0;
}

int isPrime(int n) {
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
