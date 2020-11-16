//
// Created by 57054 on 2020/10/27.
//
#include "stdio.h"
#include "math.h"

int k(int i) {
    int x = 1;
    for (int j = 1; j <= i; ++j) {
        x *= j;
    }
    return x;
}

int main(void){
    double sum = 1;
    int x;
    scanf("%d",&x);
    for (int i = 1; i <= 20; ++i) {
        sum+=pow(-1,i)*pow(x,2*i)/k(2*i);
    }
    printf("%f",sum);
    return 0;
}
