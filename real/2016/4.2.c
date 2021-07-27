//
// Created by 57054 on 2020/10/22.
//
#include "stdio.h"
#include "math.h"

int main(void) {
    int i, counter = 0;
    int m;
    for (i = 100; i <= 200; ++i) {
        m = 2;
        while (i % m != 0 && m < i) {
            m++;
        }
        if(m--==i){
            printf("%d ",i);
            counter++;
        }
    }
    printf("\n%d",counter);
    return 0;
}
