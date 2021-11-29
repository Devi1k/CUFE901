//
// Created by 57054 on 2020/11/28.
//
#include "stdio.h"

int main(void) {
    char s[80], *p;
    int n = 3, upper = 0, lower = 0, number = 0, space = 0;
    while (n--) {
        gets(s);
        p = s;
        while (*p) {
            if (*p <= 'z' && *p >= 'a')
                lower++;
            else if (*p <= 'Z' && *p >= 'A')
                upper++;
            else if (*p <= '9' && *p >= '0')
                number++;
            else if(*p==' ')
                space++;
            p++;
        }
    }
    printf("l%d u%d n%d s%d",lower,upper,number,space);
    return 0;
}
