//
// Created by 57054 on 2020/11/26.
//
#include "stdio.h"
#include "math.h"

float fun(int n) {
    float k = 1;
    for (int i = 1; i <= n; ++i) {
        k *= i;
    }
    return k;
}

int main(void) {
    float sum = 0;
    for (int i = 1,n=1; i <= 30 ; n+=2,++i) {
        sum+=1/fun(n)*pow(-1,i-1);
    }
    printf("sum = %f\n",sum);
    return 0;
}
