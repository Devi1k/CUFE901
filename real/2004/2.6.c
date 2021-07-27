//
// Created by 倪泽溥 on 2021/4/27.
//
#include "stdio.h"
void f(int i,char *cp){
    for (;  i ; i--) {
        printf("%c",*cp++);
    }
}

int main(void){
    char a[][3] = {"ABC","DEF","GH"};
    char *p;
    p = a[0];
    f(1,p++);
    f(1,p++);
    f(1,p++);
    printf("\n");
    f(3,p++);
    f(2,p++);
    f(1,p);
    printf("\n");
    printf("%s\n",a[0]);

}