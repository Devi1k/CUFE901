//
// Created by 57054 on 2020/12/22.
//
#include "stdio.h"


int main(void){
    int a = 10;
    int i = 0;
    do{
        a--;
        i++;
    } while (a!=0);
    printf("%d",i);
    return 0;
}
