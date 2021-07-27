//
// Created by 57054 on 2020/11/2.
//
#include "stdio.h"

#define N 5
struct store {
    int num;
    char name[10];
    int count;
} remain[N];

int main(void) {
    int mark = 0, min= 32767;
    for (int i = 0; i < N; ++i) {
        scanf("%d%s%d",&remain[i].num,remain[i].name,&remain[i].count);
    }
    for (int i = 0; i < N; ++i) {
        if (min > remain[i].count){
            min = remain[i].count;
            mark = i;
        }
    }

    printf("%d %s %d",remain[mark].num,remain[mark].name,remain[mark].count);
    return 0;
}


