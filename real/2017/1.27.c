//
// Created by 57054 on 2020/10/27.
//
#include "stdio.h"
#include "string.h"
int strcmpA(char *s, char *t) {
    for (; *s == *t;) {
        if (!*t)
            return 0;
        s++, t++;
    }
    return (*s - *t);
}

int main(void) {
    char s[20] = "asdgz";
    char t[20] = "asdgz";
    printf("%d ",strcmpA(s,t));
    printf("%d",strcmp(s,t));
}
