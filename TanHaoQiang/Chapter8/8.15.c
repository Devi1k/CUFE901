//
// Created by 57054 on 2020/12/1.
//
#include "stdio.h"

#define N 4
#define M 5

void avsco(float *pgrade, float *paver) {
    float sum = 0, average;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            sum += *(pgrade + i * M + j);
        }
        average = sum / M;
        paver[i] = average;
    }
}

void avcour1(char (*pcourse)[10], float *pgrade) {
    float sum = 0, average;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            sum += *(pgrade + i * N);
        }
        average = sum / N;
    }
    printf(" cours1:%s average score:%f\n", *pcourse, average);
}

void fail2(float *pgrade, float *paver, int *pnum, char (*pcourse)[10]) {
    int n;
    for (int i = 0; i < N; ++i) {
        n = 0;
        for (int j = 0; j < M; ++j) {
            if (*(pgrade + M * i + j) < 60)
                n++;
        }
        if (n >= 2) {
            printf("No.%d aver is %f",pnum[i],paver[i]);
            for (int j = 0; j < M; ++j) {
                printf("%f ", *(pgrade + M * i + j));
            }
        }
    }
}

void good(char (*course)[10], int *pnum, float *pscore, float *aver) {

}


int main(void) {
    int num[4], *pnum;//学号
    float grade[N][M], aver[N], *pgrade, *paver; //学生成绩以及平均分
    char course[M][10], (*pcourse)[10]; //课程名称
    pcourse = course;
    for (int i = 0; i < M; ++i) {
        gets(course[i]);
    }
    pgrade = grade[0];
    pnum = num;
    for (int i = 0; i < N; ++i) {
        scanf("%d", pnum + i);
        for (int j = 0; j < M; ++j) {
            scanf("%f", pgrade + i * M + j);
        }
    }
    paver = aver;
    avcour1(pcourse, pgrade);
    fail2(pgrade, paver, pnum, pcourse);
    good(pcourse, pnum, pgrade, paver);
    return 0;
}
