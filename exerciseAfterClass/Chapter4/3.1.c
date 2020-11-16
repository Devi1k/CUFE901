//
// Created by 57054 on 2020/10/28.
//
#include "stdio.h"

int main(void) {
    double buy, get;
    scanf("%lf", &buy);
    if (buy <= 500)
        get = buy;
    else if (500 < buy && 1000 >= buy)
        get = buy * 0.9;
    else if (buy > 1000)
        get = buy * 0.8;
    printf("%.2lf",get);
    return 0;
}
