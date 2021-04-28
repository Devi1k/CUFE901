//
// Created by 倪泽溥 on 2021/4/27.
//
#include "stdio.h"

int main(){
    char *s[6] = {"BGCD","OFEH","IJKV","ALMN","QXYZ","PRST"};
    char **p;
    p = s;
    for (int k = 1; k < 4; ++k) {
        printf("%c",(*p)[k]);
    }
}