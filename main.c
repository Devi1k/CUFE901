//
// Created by 57054 on 2020/11/7.
//

#include "stdio.h"

int main(void) {
    char a[10],*p;
    p = a;
    gets(p);
    puts(a);
    puts(p);
    return 0;
}