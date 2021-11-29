//
// Created by 57054 on 2020/12/22.
//
#include "stdio.h"

int main(void) {
    int a[4][3] = {0},*p[4],**pp;
    for (int i = 0; i < 10; i+=2) {
        p[i] = a[i];
    }
    pp = p;
    printf("%d",pp[3][4]);
}