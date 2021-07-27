//
// Created by 57054 on 2020/10/20.
//
#include "stdio.h"
#include "math.h"
int isPrime(int n);
int main(void) {
    int i, n;
    double sum = 0;
    scanf("%d", &n);
    for (i = 3; i <= n; ++i) {
        if (isPrime(i))
            sum += sqrt(i);
    }
    printf("%.2f", sum);
    return 0;
}

int isPrime(int n) {
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

