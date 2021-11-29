//
// Created by 倪泽溥 on 2021/4/27.
//
#include "stdio.h"

int main(void) {
    char *a;
    int i;
    char p[] = "%2d=%-20.1s\n";
    a = "* * * * * * * * * * * * * * * * * * * *";
    for (i = 0; i < 10; ++i) {
        *(p + 9) = i + '0';
        printf(p, i, a);
    }
}
