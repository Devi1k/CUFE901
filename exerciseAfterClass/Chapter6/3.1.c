//
// Created by 57054 on 2020/10/29.
//
#include "stdio.h"

int main(void) {
    int a[10];
    int temp;
    for (int i = 0; i < 10; ++i) {
        a[i] = i;
    }
    temp = a[0];
    for (int i = 0; i < 9; ++i) {
        a[i] = a[i+1];
    }
    a[9] = temp;
    for (int i = 0; i < 10; ++i) {
        printf("%d ",a[i]);
    }
    return 0;

}
