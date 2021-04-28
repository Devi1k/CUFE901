//
// Created by 57054 on 2020/12/22.
//
#include "stdio.h"


int main(void){
    struct wc {
        int a;
        int *b;
    } *p;
    int x0[] = {11, 16}, x1[] = {31, 36};
    struct wc x[] = {100, x0, 300, x1};
    p = x;
    printf("%d\n",p);
    printf("%d\n",(p++)->a);
    printf("%d\n",p);
    return 0;
}