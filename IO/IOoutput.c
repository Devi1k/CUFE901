//
// Created by 57054 on 2020/11/6.
//

//
// Created by 57054 on 2020/10/12.
//
#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 4
struct grade {
    char name[10];
    float grade[M];
    float total;
} student[N];

int main(void) {
    FILE *fp1;
    struct grade students[N];
    if ((fp1 = fopen("f1.dat", "rb")) == NULL) {
        fprintf(stderr, "Cannot open this file");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < N; ++i) {
        fread(&students[i], sizeof(struct grade), 1, fp1);
    }
    for (int i = 0; i < N; ++i) {
        printf("%s ",students[i].name);
        for (int j = 0; j < M; ++j) {
            printf("%.2f ",students[i].grade[j]);
        }
        printf("\n");
    }
}
