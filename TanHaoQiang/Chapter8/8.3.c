//
// Created by 57054 on 2020/11/30.
//
#include "stdio.h"

void fun(int a[], int n) {
    int *p, *q;
    int temp;
    p = a, q = a;
    for (int i = 1; i < n; i++) {
        if (*p > a[i])
            p = a+i;
    }
    temp = *p;
    *p = a[0];
    a[0] = temp;
    for (int i = 1; i < n; i++) {
        if (*q < a[i])
            q = a+i;
    }
    temp = *q;
    *q = a[9];
    a[9] = temp;
}

int main(void) {
    int a[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
    fun(a, 10);
    for (int i = 0; i < 10; ++i) {
        printf("%d ", a[i]);
    }
    return 0;
}
