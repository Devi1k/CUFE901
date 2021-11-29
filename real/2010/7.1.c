//
// Created by 57054 on 2020/11/8.
//
#include "stdio.h"

#define N 5

struct goods {
    char name[10];
    float price;
    char date[10];
};


int main(void) {
    struct goods goods[N];
    struct goods *p;
    int count = 0;
    p = goods;
    for (int i = 0; i < N; ++i) {
        scanf("%s%f%s", goods[i].name, &goods[i].price, goods[i].date);
    }
    while (p - goods < N) {
        if (p->price > 30){
            printf("%s %f %s\n", p->name, p->price, p->date);
            count++;
        }
        p++;
    }
    printf("above 30:%d",count);
    return 0;
}