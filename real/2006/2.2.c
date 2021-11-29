//
// Created by 57054 on 2020/11/16.
//
#include "stdio.h"

int sub(char *p, char *q) {
    int i;
    char *p1 = p, *q1;
    for (i = 0; *p; p++, ++i) {
        p = p1 + i;
        if (*p != *q)
            continue;
        for (q1 = q + 1, p = p + 1; *q && *q1; q1++, p++) {
            if (*p != *q1)
                break;

        }
        if (!(*q1))
            return i;

    }
    return -1;
}

int main(void) {
    int a;
    char c[] = "abcde",b[] = "bcdefg";
    a = sub(c,b);
    printf("%d", a);
    return 0;
}
