//
// Created by 57054 on 2020/11/14.
//
#include "stdio.h"

int main(void) {
    union {
        int i[2];
        long k;
        char c[4];
    }p;

    p.i[0] = 0x35;
    p.i[1] = 0x34;
    printf("%d,%d",sizeof(int),sizeof(long));
    printf("%lx\n",p.k);
}
