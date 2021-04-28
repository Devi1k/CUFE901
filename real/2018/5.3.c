//
// Created by 倪泽溥 on 2021/4/28.
//
#include "stdio.h"

#define N 10
struct insurance {
    int num;
    char brand[20];
    float fee;
    int year;
} car[N];

int main(void) {
    printf("Enter car information:");
    for (int i = 0; i < N; ++i) {
        scanf("%d%s%f%d", &car[i].num, car[i].brand, &car[i].fee, &car[i].year);
    }
    double a[N], b[N];
    for (int i = 0; i < N; ++i) {
        a[i] = car[i].fee - car[i].fee * 0.1 * car[i].year;
        if (a[i] >= 5000)
            b[i] = a[i]*0.06;
        else{
            b[i] = 5000*0.06;
        }
    }
    double max;
    max=b[0];
    for (int i = 0; i < N; ++i) {
        if(b[i]>max)
            max = b[i];
    }
    printf("the highest fee is %.2f",max);
    return 0;
}