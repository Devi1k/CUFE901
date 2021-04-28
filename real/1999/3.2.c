//
// Created by 倪泽溥 on 2021/4/27.
//
#include "stdio.h"


int fun() {
    static int a[3] = {0, 1, 2};
    for (int i = 0; i < 3; ++i) {
        a[i] += a[i];
    }
    for (int i = 0; i < 3; ++i) {
        printf("%d",a[i]);
    }
    printf("\n");
}

int main(void) {
    fun();
    fun();
}

