//
// Created by 57054 on 2020/11/9.
//
#include "stdio.h"


int count(char *s, int *number, int *space) {
    int alpha = 0;
    while (*s) {
        if (*s <= '9' && *s >= '0')
            (*number)++;
        else if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
            alpha++;
        else if(*s==' ')
            (*space)++;
        s++;
    }
    return alpha;
}

int main(void) {
    char s[80];
    int alpha = 0, number = 0, space = 0;
    int (*p)();
    p = count;
    gets(s);
    alpha = p(s, &number, &space);
    printf("%d %d %d", alpha, number, space);
    return 0;
}

