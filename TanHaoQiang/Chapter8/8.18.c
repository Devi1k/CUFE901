//
// Created by 57054 on 2020/12/1.
//
#include "stdio.h"

int main(void) {
    char *str[] = {"Jau", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int n;
    scanf("%d",&n);
    printf("%s",*(str+n-1));
    return 0;
}
