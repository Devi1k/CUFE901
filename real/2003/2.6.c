//
// Created by 57054 on 2020/12/13.
//
#include "stdio.h"

#define P printf
#define C2 "%c" "%c" "\n"
#define S2 "%s" "%s" "\n"

int main(void) {
    struct s {
        char c[5];
        char *s;
    } s1 = {"cake", "milk"};
    struct {
        char *str;
        struct s ss;
    } s2 = {"work", {"time", "free"}};
    P(C2, *(s1.c + 1), *s1.s + 1);
    P(S2, s1.c + 2, s1.s + 3);
    P(S2, s2.str, s2.ss.s);
    P(S2, ++s2.str, s2.ss.s + 2);
    return 0;
}
