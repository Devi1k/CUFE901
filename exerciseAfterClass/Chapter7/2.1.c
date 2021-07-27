//
// Created by 57054 on 2020/10/30.
//
#include "stdio.h"

int main(void) {
    int a, b, k = 2, m = 4, n = 6;
    int *pk = &k, *p2 = &m, *p3;
    a = pk == &k;
    b = 4 * (-*pk) / (*p2) + 5;
    *(p3 = &n) = *pk * (*p2);
    printf("%d %d %d",a,b,n);
    return 0;
}
