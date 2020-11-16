//
// Created by 57054 on 2020/11/9.
//
#include "stdio.h"

int main(void) {
    int i, t = 1, s = 0;
    for (i = 1; i <= 101; i += 2) {
        t = t * i;
        s += t;
        t = -t / i;
    }
    printf("%d", s);
}