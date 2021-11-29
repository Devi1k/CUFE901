//
// Created by 57054 on 2020/10/29.
//
#include "stdio.h"

int main(void){
    int N = 80;
    char s[N];
    int n = 5;
    int a[n][n];
    int i;
    for (i = 0; i < N-1; ++i) {
        s[i] = 'a';
    }
    s[N] = '\0';
    printf("%s",s);
    return 0;
}
