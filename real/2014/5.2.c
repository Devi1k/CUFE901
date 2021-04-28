//
// Created by 57054 on 2020/10/12.
//
#include <stdio.h>
#include <math.h>

int isPrime(int n);

int split(int n, int *a, int *b) {
    int i;
    for (i = 2; i < n; ++i) {
//        printf("%d ",i);

            if(!isPrime(i))
                continue;
            else{
                *a = i;
                *b = n - *a;
//                printf("%d %d\n", *a,*b);
                if (!isPrime(*b))
                    continue;
                else
                    return 1;
            }
        }
    return 0;
}

int isPrime(int n) {
    for (int j = 2; j <= sqrt(n); ++j) {
        if (n % j == 0)
            return 0;
    }
    return 1;
}

int main(void) {
    int n, a, b;
    scanf("%d", &n);
    if (split(n, &a, &b) == 1) {
        printf("%d,%d", a, b);
    } else {
        printf("no results!");
    }
    return 0;
}