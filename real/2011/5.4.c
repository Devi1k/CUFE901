//
// Created by 57054 on 2020/10/21.
//
#include "string.h"
#include "stdio.h"

int fun(char s[], int a[]) {
    int flag = 0, len = 0;
    int num = 0;
    for (int i = 0; i <= strlen(s); ++i) {
        if (s[i] <= '9' && s[i] >= '0' && !flag) {
            flag = 1;
            num = num * 10 + (s[i] - '0');
        } else if (flag && s[i] <= '9' && s[i] >= '0') {
            num = num * 10 + (s[i] - '0');
        } else if (flag && (s[i] > '9' || s[i] < '0')) {
            a[len++] = num;
            flag = 0;
            num = 0;
        }
    }
    return len;
}


int main(void) {
    char s1[] = "AS234fgh456d 17968x7654zxc9876zxcv";
    int a[20], len;
    len = fun(s1, a);
    for (int i = 0; i < len; ++i) {
        printf("%d  ", a[i]);
    }
    return 0;
}
