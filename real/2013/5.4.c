//
// Created by 57054 on 2020/11/6.
//
//
// Created by 57054 on 2020/11/6.
//
#include "stdlib.h"
#include "stdio.h"

#define N 3
#define M 4
struct grade {
    char name[10];
    float grade[M];
    float total;
} student[N];

int main(void) {
    FILE *fp1,*fp2;
    float sum;
    int k;
    struct grade temp;
    if ((fp1 = fopen("f1.dat", "rb")) == NULL) {
        fprintf(stderr, "Cannot open");
        exit(EXIT_FAILURE);
    }
    if ((fp2 = fopen("f2.dat", "wb")) == NULL) {
        fprintf(stderr, "Cannot open");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < N; ++i) {
        fread(&student[i], sizeof(struct grade), 1, fp1);
    }
    for (int i = 0; i < N; ++i) {
        sum = 0;
        for (int j = 0; j < M; ++j) {
            sum += student[i].grade[j];
        }
        student[i].total = sum;
    }
    for (int i = 0; i < N - 1; ++i) {
        k = i;
        for (int j = i + 1; j < N; ++j) {
            if (student[k].total > student[j].total)
                k = j;
        }
        if (k != i) {
            temp = student[k];
            student[k] = student[i];
            student[i] = temp;
        }
    }
    for (int i = 0; i < N; ++i) {
        fwrite(&student[i],sizeof(struct grade),1,fp2);
    }
    return 0;

}

