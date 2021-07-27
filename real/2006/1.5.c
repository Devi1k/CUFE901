//
// Created by 57054 on 2020/11/16.
//
#include "stdio.h"
int main(void){
    int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11},*p = a;
    p+=7;
    printf("%d\n",*p);
    printf("%d\n",*(*a+7));
    printf("%d\n",*(a[1]+2));
    printf("%d\n",*(&a[0]+7));
    printf("%d\n",*(a+7));

}
