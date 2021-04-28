//
// Created by 57054 on 2020/11/14.
//
#include "stdio.h"

int main(void) {
    union {
        int i[2];
        long k;
        char c[4];
    }*s;

    s->i[0] = 0x35;
    s->i[1] = 0x34;
    printf("%lx\n",s->k);
    printf("%c\n",s->c[0]);
}
