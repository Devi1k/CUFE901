//
// Created by 57054 on 2020/10/29.
//
#include "stdio.h"
#include "string.h"

void reverse(char s[]) {
    int len = strlen(s);
    char temp;
    for (int i = 0, j = len - 1; i < j; ++i,--j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}


int main(void) {
    char s[20];
    gets(s);
    puts(s);
    reverse(s);
    puts(s);
    return 0;
}
