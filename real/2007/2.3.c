//
// Created by 57054 on 2020/11/17.
//
#include "stdio.h"

union ww {
    char s[4];
    int k;
};
struct node {
    int a, *b;
    union ww c;
};

int main(void) {
    int a[5], i, n = 0x6162;
    struct node s[5], *p;
    for (i = 0, p = s; i < 5; ++i, p++) {
        p->b = a + i;
        s[i].c.k = n++;
    }
    for (i = 0; i < 5; ++i) {
        a[i] = i * 10 + 10;
    }
    p = s;
    printf("%d,", ++*p->b);
    printf("%d,", *++p->b);
    printf("%c,", p++->c.s[0]);
    printf("%d,", *++p->b);
    printf("%c,", p->c.s[1]++);
    printf("%x,", p++->c.k);
    for (i = 0, p = s; i < 5; ++i, p++) {
        printf("%d,", *p->b);
    }
    return 0;

}
