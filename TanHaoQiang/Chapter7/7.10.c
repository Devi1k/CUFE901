//
// Created by 57054 on 2020/11/29.
//
#include "stdio.h"
#include "string.h"
int isAlpha(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    else
        return 0;
}

void count(char *s) {
    int flag = 0,i = 0,k;
    char *p, *q;
    int len = 0, length = 0;
    k = strlen(s);
    while (i<=k) {
        if (flag == 0 && isAlpha(*s)) {
            flag = 1;
            len++;
        } else if (flag == 1 && isAlpha(*s))
            len++;
        else if (!isAlpha(*s)) {
            flag = 0;
            if (length < len) {
                length = len;
                p = s - length;
                q = s;
            }
            len = 0;
        }
        s++;
        i++;
    }
    for (; p < q; ++p) {
        printf("%c", *p);
    }

}


int main(void) {
    char s[80];
    gets(s);
    count(s);
    return 0;
}
