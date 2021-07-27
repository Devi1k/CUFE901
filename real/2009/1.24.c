//
// Created by 57054 on 2020/11/17.
//
#include "stdio.h"

union ww{
    int a;
    char b;
};

union ww fun(){
    union ww temp;
    temp.a = 1;
    return temp;
}
int main(void) {
    union ww t = fun();
    printf("%d",t.a);
    return 0;
}
