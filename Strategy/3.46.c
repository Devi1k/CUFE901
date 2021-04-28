//
// Created by 57054 on 2020/12/22.
//
#include "stdio.h"

int main(void) {
    char *s, c[80];
    s = c;
    gets(s);
    while (*(++s) != '\0')
        if (*s == 'a')
            break;
        else {
            s++;
            gets(s);
        }
    puts(s);
}
