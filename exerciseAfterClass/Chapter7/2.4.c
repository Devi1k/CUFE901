//
// Created by 57054 on 2020/10/30.
//
#include "stdio.h"
#include "string.h"
void fun(char *s){
    char a[10];
    strcpy(a,"STRING");
    s = a;
}

int main(void){
    char *p;
    fun(p);
    printf("%s\n",p);
    return 0;
}
