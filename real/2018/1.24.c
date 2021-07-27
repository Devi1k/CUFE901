//
// Created by 57054 on 2020/11/26.
//
#include "stdio.h"
int main(void){
    char *s[] = {"one","two","three"},*p;
    p = s[1];
    printf("%c %s",*(p+1),s[0]);
    return 0;
}
