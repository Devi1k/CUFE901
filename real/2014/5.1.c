//
// Created by 57054 on 2020/10/12.
//
#include <stdio.h>
int index(char *str, char t) {
    char *s;
    s = str;
    while (*s != '\0') {
        if (*s == t)
            return (s - str+1);
        else
            s++;
    }
    return -1;
}

int main(void) {
    char s[80], c;
    gets(s);
    c = getchar();
    int i = index(s,c);
    printf("%d",i);
    return 0;
}
