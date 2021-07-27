//
// Created by 57054 on 2020/12/21.
//
#include "stdio.h"

int main(void) {
    char s[80];
    char ch;
    int alpha, space, number, other;
    alpha = space = number = other = 0;
    gets(s);
    for (int i = 0; s[i]; ++i) {
        ch = s[i];
        if ((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'))
            alpha++;
        else if (s[i] <= '9' && s[i] >= '0')
            number++;
        else if (s[i] == ' ')
            space++;
        else
            other++;
    }
    printf("%d %d %d %d", alpha, number, space, other);
    return 0;
}