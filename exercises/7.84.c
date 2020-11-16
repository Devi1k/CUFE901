//
// Created by 57054 on 2020/10/17.
//
#include <stdio.h>
#include <math.h>
int isPrime(int n) {
    if (n == 1)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % 2 == 0)
            return 0;
    }
    return 1;
}
int main(void) {
    int x =46;
    printf("%d",isPrime(x));
    return 0;
}


