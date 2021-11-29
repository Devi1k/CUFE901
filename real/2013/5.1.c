//
// Created by 57054 on 2020/11/6.
//
#include "stdlib.h"
#include "stdio.h"

int isPrime(int n) {
    for (int i = 2; i < n / 2; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}


int main(void) {
    int m;
    scanf("%d", &m);
    for (int i = 2; i <= m; ++i) {
        if (isPrime(i)) {
            while (m > 0) {
                if (m % i == 0) {
                    printf("%d ", i);
                    m /= i;
                } else
                    break;
            }
        }
    }
}
