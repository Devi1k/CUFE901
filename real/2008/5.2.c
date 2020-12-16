//
// Created by 57054 on 2020/11/10.
//
#define N 10
#define M 5
struct student {
    int num;
    float grade[M];
    float average;
};

#include "stdio.h"
#include "stdlib.h"

void write(struct student *students) {
    FILE *fp;
    float sum;
    struct student *p;
    p = students;
    if ((fp = fopen("qwer", "wb")) == NULL) {
        fprintf(stderr, "Cannot open");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < N; ++i) {
        sum = 0;
        for (int j = 0; j < M; ++j) {
            sum += (*(p + i)).grade[j];
        }
        (*(p + i)).average = sum / M;
    }
    for (int i = 0; i < N; ++i) {
        fwrite(p + i, sizeof(struct student), 1, fp);
    }


}

int main(void) {
    struct student students[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &students[i].num);
        for (int j = 0; j < M; ++j) {
            scanf("%f", &students[i].grade[j]);
        }
    }
    write(students);

}

