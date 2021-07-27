//
// Created by 57054 on 2020/12/21.
//
//1
struct raw {
    int num;
    char name[20];
    double price;
    int count;
    char date[10];
} raws[10];
#define N 10

#include "stdio.h"
#include "stdlib.h"

//2
void get_raw_info() {
    for (int i = 0; i < N; ++i) {
        scanf("%d", &raws[i].num);
        gets(raws[i].name);
        scanf("%lf", &raws[i].price);
        scanf("%d", &raws[i].count);
        gets(raws[i].date);
    }
}

//3
void sort_raw() {
    struct raw temp;
    int k;
    for (int i = 0; i < N - 1; ++i) {
        k = i;
        for (int j = 0; j < N; ++j) {
            if (raws[k].price * raws[k].count < raws[j].price * raws[j].count)
                k = j;
        }
        if (k != i) {
            temp = raws[k];
            raws[k] = raws[i];
            raws[i] = temp;
        }
    }
}

//4
int main(void) {
    FILE *fp;
    get_raw_info();
    sort_raw();
    if ((fp = fopen("D:\\save.dat", "wb")) == NULL) {
        fprintf(stderr, "Cannot open this file");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < 5; ++i) {
        fwrite(&raws[i], sizeof(struct raw), 1, fp);
    }
    fclose(fp);
    return 0;
}
