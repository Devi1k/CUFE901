//
// Created by 倪泽溥 on 2021/4/27.
//
#include "stdio.h"
static int a = 5;
int b = 10;
extern void sub2();
void sub1(){
    a+=2;b+=3;
    printf("%d %d\n",a,b);
}
int main(){
    sub1();
    sub2();
    sub1();
    sub2();
    printf("%d %d\n",a,b);
}
