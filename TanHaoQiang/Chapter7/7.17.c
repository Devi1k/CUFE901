//
// Created by 57054 on 2020/11/29.
//
#include "stdio.h"

void convert(int n) {
    int i;
    if ((i = n / 10) != 0)
        convert(i);
    putchar(n % 10 + '0');
}


int main(void) {
    convert(2345678);
    return 0;
}
