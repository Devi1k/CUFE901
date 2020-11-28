//
// Created by 57054 on 2020/11/28.
//
#include "stdio.h"

int main(void) {
    char s[80];
    gets(s);
    int i;
    puts(s);
    for (int j = 0; s[j] != '\0'; ++j) {
        if (s[j] >= 'a' && s[j] <= 'z'){
            i = s[j] - 'a' + 1;
            i = 26 - (i - 1);
            s[j] = 'a' + (i - 1);
        }else if(s[j] >= 'A' && s[j] <= 'Z'){
            i = s[j] - 'A' + 1;
            i = 26 - (i - 1);
            s[j] = 'A' + (i - 1);
        }
    }
    puts(s);
}
