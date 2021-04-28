//
// Created by 倪泽溥 on 2021/4/27.
//
#include "stdio.h"

int main(void) {

    char f[] = "%12.8s\n", *s = "********";
    for (int i = 1; i < 9; ++i) {
        *(f + 2) = 2 + i - 1 + '0';
        *(f + 4) = 8 - i + 1 + '0';
        printf(f, s);
    }
}
