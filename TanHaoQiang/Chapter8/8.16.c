//
// Created by 57054 on 2020/12/1.
//
#include "stdio.h"
#include "string.h"

int isNumber(char ch) {
    if ((ch >= '0' && ch <= '9'))
        return 1;
    else
        return 0;
}

int main(void) {
    char s[80];
    int a[20], flag = 0, num = 0, k = 0;
    gets(s);
    for (int i = 0; i <= strlen(s); ++i) {
        if (isNumber(s[i]) && !flag) {
            flag = 1;
            num = num * 10 + (s[i] - '0');
        } else if (isNumber(s[i]) && flag)
            num = num * 10 + (s[i] - '0');
        else {
            flag = 0;
            if (num != 0) {
                a[k] = num;
                k++;
                num = 0;
            }
        }
    }
    for (int i = 0; i < k; ++i) {
        printf("%d ", a[i]);
    }
    return 0;
}
