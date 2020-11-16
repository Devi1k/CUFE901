//
// Created by 57054 on 2020/11/16.
//
#include "stdio.h"
int main(void){
    int a[3][4] = {0},*p = a;
    p+=7;
    printf("%d\n",*p);
    printf("%d\n",*(*a+7));
    printf("%d\n",*(&a[0]+7));
    printf("%d\n",*(a+7));

}
