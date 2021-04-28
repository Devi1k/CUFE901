//
// Created by 倪泽溥 on 2021/4/27.
//
#include "stdio.h"

int main(void){
    int k;
    char *s = "a\045+045\'b";
    for (k = 0; s++; ++k) ;
    printf("%d",k);
}
