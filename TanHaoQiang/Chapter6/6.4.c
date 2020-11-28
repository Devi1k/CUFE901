//
// Created by 57054 on 2020/11/28.
//
#include "stdio.h"

void sort(int a[], int x) {
    int i = 0;
    while (x > a[i])
        i++;
    for (int j = 5; j > i; --j) {
        a[j] = a[j-1];
    }
    a[i] = x;
}

int main(void) {
    int a[] = {1, 3, 5, 7, 8, 9};
    int b;
    scanf("%d", &b);
    sort(a,b);
    for (int i = 0; i < 6; ++i) {
        printf("%d ",a[i]);
    }
    return 0;
}


