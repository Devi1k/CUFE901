//
// Created by 倪泽溥 on 2021/4/27.
//
#include "stdio.h"

int main(void) {
    char *s, *s1 = "aaaa";
    char *s2 = "bbbbb";
    s = s1;
    while (*s1++);
    s1--;
    while (*s1++ = *s2++);
    --s2;
    printf("%d %s", s2 - s, s);
}
