//
// Created by 57054 on 2020/11/8.
//
#include "stdio.h"

void joint(char *s, char *t, int n) {
    int i = 0, j = 0;
    char *q = t,*p = s;
    while (*p++)
        i++;
    while (*q++)
        j++;
    i = i < n ? i : n;
    j = j < n ? j : n;
    for (int k = 0; k < j; ++k,++t) {
        s[i++] = *t;
    }
    s[i] = '\0';
}

int main(void) {
    char s[80], t[80];
    int n;
    gets(s);
    gets(t);
    scanf("%d", &n);
    joint(s, t, n);
    puts(s);
    return 0;
}


