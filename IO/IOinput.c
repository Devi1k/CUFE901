//
// Created by 57054 on 2020/10/12.
//
#include <stdio.h>
#include <stdlib.h>

#define N 5
struct goods {
    int NO;
    char name[10];
    int NUM;
}goods[N];

int main(void) {
    FILE *fp2;
    if ((fp2 = fopen("C:\\goods\\INFO.dat", "wb")) == NULL) {
        fprintf(stderr, "Cannot open KK");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < N; ++i) {
        scanf("%d",&goods[i].NO);
        scanf("%s",goods[i].name);
        scanf("%d",&goods[i].NUM);
        fwrite(&goods[i], sizeof(struct goods), 1, fp2);
    }

    for (int i = 0; i < N; ++i) {
        printf("%s %d\n",goods[i].name,goods[i].NUM);
    }
}
