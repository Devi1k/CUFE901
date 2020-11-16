//
// Created by 57054 on 2020/10/17.
//
#include <stdio.h>
int main(void){
    int *p,i = 65;
    char *q,ch;
    p =&i;
    q = &ch;
    *p = 40;
    *p = *q;
    ch = i;
    putchar(ch);
}
