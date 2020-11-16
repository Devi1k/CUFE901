//
// Created by 57054 on 2020/10/19.
//
#include "stdio.h"
#include "string.h"

int chnum(char *p) {
    int num = 0, k, len, j;
    len = strlen(p);
    for (; *p; p++) {
        k = *p - '0';
        j = (--len);
        while (j--)
            k = k * 10;
        num = num + k;
    }
    return num;
}

int main(void){
    char s[80];
    gets(s);
    int k = chnum(s);
    printf("%d",k);
    return 0;
}
