//
// Created by 57054 on 2020/10/27.
//
#include "stdio.h"

#define N 20
struct commodity {
    int num;
    char name[20];
    char place[20];
    float price;
    int storage;
} goods[N];

int search_max(float fond[], int n) {
    int max;
    max = fond[0];
    for (int i = 0; i < n; ++i) {
        if (fond[i] > max)
            max = fond[i];
    }
    return i;
}

int search_min(float fond[], int n) {
    int min;
    min = fond[0];
    for (int i = 0; i < n; ++i) {
        if (fond[i] < min)
            min = fond[i];
    }
    return i;
}

int main(void) {
    int max, min;
    float fond[N];
    for (int i = 0; i < N; ++i) {
        fond[i] = goods[i].storage * goods[i].price;
    }
    max = search_max(fond, N);
    min = search_min(fond, N);
    printf("占用最大资金数量的商品信息：%d,%s,%s,%.2f,%d", goods[max].num, goods[max].name, goods[max].place, goods[max].price,
           goods[max].storage);
    printf("占用最小资金数量的商品信息：%d,%s,%s,%.2f,%d", goods[min].num, goods[min].name, goods[min].place, goods[min].price,
           goods[min].storage);
    return 0;
}


