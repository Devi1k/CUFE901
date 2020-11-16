//
// Created by 57054 on 2020/10/30.
//
#include "stdio.h"

void strcpy1(char *s, char *t, int m) {
    int i = 1;
    while (i < m){
        i++;
        t++;
    }
    while(*t){
        *s++ = *t++;
    }
}

int main(void) {
    char s[20];
    char *t = "abcd";
    strcpy1(s,t,3);
    puts(s);
    return 0;

}

