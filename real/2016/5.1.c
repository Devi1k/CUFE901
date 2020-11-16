//
// Created by 57054 on 2020/10/23.
//
#include "stdio.h"

int main(void) {
    int i, sum;
    for (i = 2; i <= 1000; ++i) {
        sum = 0;
        for (int j = 1; j < i; ++j) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if(sum==i){
            printf("%d  ",i);
        }
    }
    return 0;
}
