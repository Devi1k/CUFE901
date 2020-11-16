//
// Created by 57054 on 2020/10/14.
//
#include <stdio.h>
#include <string.h>
int main(void){
    char a[7] = "abcdef",b[4] = "ABC";
    strcpy(a,b);
    printf("%c",a[5]);
    return 0;
}
