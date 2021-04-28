//
// Created by 倪泽溥 on 2021/4/28.
//
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define N 100
struct factor {
    char name[20];
    float index;
    float condi;
    float level;
    float poten;
} firm[N];

struct result {
    char name[20];
    int rank;
} re[N];


int main(void) {
    FILE *fp1, *fp2;
    float power[N];
    if ((fp1 = fopen("old.txt", "r")) == NULL) {
        printf("error");
        exit(EXIT_FAILURE);
    }
    if ((fp2 = fopen("new.txt", "w")) == NULL) {
        printf("error");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < N; ++i) {
        fread(&firm[i], sizeof(struct factor), 1, fp1);
    }
    for (int i = 0; i < N; ++i) {
        strcpy(re.name[i], firm.name[i]);
        re[i].rank = i + 1;
        power[i] = 0.5 * firm[i].index + 0.3 * firm[i].condi + 0.1 * firm[i].level + 0.1 * firm[i].poten;
    }
    int temp;
    for (int i = 1; i < N; ++i) {
        for (int j = 0; j < N - 1; ++j) {
            if (power[j] < power[j + 1]) {
                temp = re[j].rank;
                re[j].rank = re[j + 1].rank;
                re[j + 1].rank = temp;
            }
        }
    }
    for (int i = 0; i < N; ++i) {
        fwrite(&re[i], sizeof(struct result), 1, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}

