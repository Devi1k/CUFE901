//
// Created by 57054 on 2020/11/29.
//

#include "stdio.h"


int convert(char *s) {
    int n = 0;
    while (*s) {
        if (*s <= '9' && *s >= '0')
            n = n * 16 + (*s - '0');
        else if (*s <= 'f' && *s >= 'a') {
            n = n * 16 + (*s - 'a' + 10);
        } else if (*s <= 'F' && *s >= 'A') {
            n = n * 16 + (*s - 'A' + 10);
        }
        s++;
    }
    return n;
}

int main(void) {
    char s[80];
    puts("Enter a number of hex");
    gets(s);
    printf("%d", convert(s));
    return 0;
}
