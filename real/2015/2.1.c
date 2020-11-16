//
// Created by 57054 on 2020/10/19.
//
#include "stdio.h"
#include "string.h"
void fun(char str[10][81],char **sp){
    int i;
    *sp = str[0];
    for (i = 1; i < 10; ++i) {
        if(strlen(*sp)<strlen(str[i]))
            *sp = str[i];
        puts(*sp);
    }
}
int main(void){
    char str[10][81];
    char **sp;
    for (int i = 0; i < 10; ++i) {
        gets(str[i]);
    }
    fun(str,sp);
    printf("%s",*sp);
}
