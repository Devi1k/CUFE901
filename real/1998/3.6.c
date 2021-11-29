//
// Created by 倪泽溥 on 2021/4/27.
//
#include "stdio.h"

int main(void) {
    struct sl {
        char *s;
        struct sl *ptr;
    };
    struct sl a[] = {
            {"abcd", a + 1},
            {"efgh", a + 2},
            {"ijkl", a}
    };
    struct sl *p = a;
    for (int i = 0; i < 3; ++i) {
        printf("%d\n", i + 1);
        printf("%s\n", a[i].s);
        printf("%s\n", a[i].ptr->s);
//        printf("%c\n",++a[i].s[i]);
        printf("%s\n", ++p++->ptr->s);
    }
}