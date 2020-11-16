//
// Created by 57054 on 2020/10/23.
//
#include "stdio.h"

int main(void) {
    int i;
    int count = 0;
    int a[1000];
    for (i = 1000; i < 10000; ++i) {
        int first = i / 1000;
        int second = i / 100 % 10;
        int third = i / 10 % 10;
        int last = i % 10;
//        printf("%d %d %d %d\n",first,second,third,last);
        if ((first + last) == (second + third)) {
            a[count++] = i;
        }
    }
    printf("%d",count);
    return 0;
}
