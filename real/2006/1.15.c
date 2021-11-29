//
// Created by 倪泽溥 on 2021/4/27.
//
#define K 2
#define X(K) ((K+1)*K)
#include "stdio.h"
int main(){
    int y;
    y = 2* X(K+ X(2+3));
    printf("%d",y);
}
