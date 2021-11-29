//
// Created by 倪泽溥 on 2021/4/27.
//
#include "stdio.h"
int main(void){
    int a[4][6],*p,*q[4];
    p=a;
    q[2] = a[2];
    p=a[2];
    q[3] = &a[0][0];
}
