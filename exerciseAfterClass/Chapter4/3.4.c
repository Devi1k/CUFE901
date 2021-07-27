//
// Created by 57054 on 2020/10/28.
//
#include "stdio.h"

int fun(int k);

int main(void) {
    //1
//    int k = 1;
//    float sum = 0, res = 0;
//    for (int i = 0; i < 20; ++i) {
//        sum += 1.0 / fun(i);
//        printf("%.2f ", sum);
//    }
//    printf("%.2f", sum);
    //2
    float k = 1,sum = 0;
    int i = 0;
    while (k >= 1e-4) {
        k = 1.0/fun(i++);
        sum+=k;
    }
    printf("%.2f",sum);


    return 0;
}

int fun(int k) {
    int res = 1;
    if (k == 0 || k == 1)
        return 1;
    else
        for (int i = 1; i <= k; ++i) {
            res *= i;
        }
    return res;
}
