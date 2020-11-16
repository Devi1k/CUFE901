//
// Created by 57054 on 2020/11/14.
//


#include "stdio.h"

int isPrime(int n) {
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i)) {
            while (n){
                if (n%i==0){
                    printf("%d ",i);
                    n = n/i;
                }else
                    break;
            }
        }
    }
    return 0;
}