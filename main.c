//
// Created by 57054 on 2020/11/7.
//

#include "stdio.h"
struct ss{
    int a;
    float b;
}students;
struct ss get(int a,struct ss five){
    struct ss ww;
    ww = students;
    return ww;
}

int main(void) {
    char (*a)[3], b[2][3];
    for (int i = 0; i < 2; ++i) {
        gets(b[i]);
    }
    a = b;
    a++;
    printf("%s",*a);

}