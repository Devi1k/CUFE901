//
// Created by 57054 on 2020/10/28.
//
#include "stdio.h"
#include "math.h"
#define PRINT(V) printf("V=%d\t",V)
int main(void) {
    float v, p, r ;
    int n;
    scanf("%f%f%d", &p, &r, &n);
//    for (int i = 0; i < n; ++i) {
//        v= p*(1+r);
//        p = v;
//    }
    v = p * powf(1 + r, n);
    printf("%.2f",v);
    PRINT(5);
    return 0;
}

