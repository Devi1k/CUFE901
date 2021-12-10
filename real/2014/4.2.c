//
// Created by 57054 on 2020/11/20.
//
#include "stdio.h"
#include "string.h"

int main(void) {
    char *s = "abc";
    char c;
    for (int i = 0, j = strlen(s) - 1; i <= j; ++i,--j) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    printf("%s",s);
    return 0;
}