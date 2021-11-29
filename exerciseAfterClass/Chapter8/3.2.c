//
// Created by 57054 on 2020/11/2.
//
#include "stdio.h"

#define N 3
struct list {
    int num;
    char name[10];
    float fee;
    int year;
} car[N];

int main(void) {
    float insurance, price;
    for (int i = 0; i < N; ++i) {
        scanf("%d%s%f%d", &car[i].num, car[i].name, &car[i].fee, &car[i].year);
        price = car[i].fee - car[i].fee * 0.1 * car[i].year;
        if (price < 2000)
            price = 2000;
        insurance = price * 0.05;
        printf("%.2f\n",insurance);
    }


}


