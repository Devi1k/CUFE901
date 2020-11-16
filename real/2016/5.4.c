//
// Created by 57054 on 2020/10/23.
//
#include "stdio.h"
#include "stdlib.h"
#define M 5
#define N 5
struct Firm {
    char FirmName[100];
    int FirmScore[5];
};

void getName(struct Firm firm[]);

void getAverage(struct Firm firm[], float average[]);

int main(void) {
    FILE *fp1;
    struct Firm firm[N];
    float average[N];
    int maxAverIndex = 0;
    int count90 = 0,count80 = 0;
    if ((fp1 = fopen("result.dat", "r")) == NULL) {
        fprintf(stderr, "Cannot open this file");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < N; ++i) {
        fread(&firm[i], sizeof(struct Firm), 1, fp1);
    }
//    for (int i = 0; i < N; ++i) {
//        printf("%s %d %d %d %d %d\n", firm[i].FirmName, firm[i].FirmScore[0], firm[i].FirmScore[1], firm[i].FirmScore[2],
//               firm[i].FirmScore[3], firm[i].FirmScore[4]);
//    }
    getName(firm);
    getAverage(firm, average);
    for (int i = 0; i < N; ++i) {
        if (average[i] > average[maxAverIndex])
            maxAverIndex = i;
    }
    printf("%s\n", firm[maxAverIndex].FirmName);
    for (int i = 0; i < N; ++i) {
//        printf("%f ",average[i]);
        if (average[i] >= 90)
            count90++;
        else if(average[i]<=90&&average[i]>=80)
            count80++;
    }
    printf("above 90:%d,between 80 and 90:%d",count90,count80);
    fclose(fp1);
    return 0;
}

void getName(struct Firm firm[]) {
    int grade[N];
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 10; ++j) {
            sum += firm[i].FirmScore[j];
        }
        grade[i] = sum;
        sum = 0;
    }
    int mark = 0;
    for (int i = 1; i < N; ++i) {
        if (grade[mark] < grade[i])
            mark = i;
    }
//    printf("%d",mark);
    printf("%s\n", firm[mark].FirmName);
}

void getAverage(struct Firm firm[], float average[]) {
    int grade[N][5];
    int max, min;
    float sum = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 10; ++j) {
            grade[i][j] = firm[i].FirmScore[j];
        }
    }
    for (int i = 0; i < N; ++i) {
        max = grade[i][0];
        for (int j = 0; j < M; ++j) { //找到最高分
            if (grade[i][j] > max)
                max = grade[i][j];
        }
        min = grade[i][0];
        for (int j = 0; j < M; ++j) { //找到最低分
            if (grade[i][j] < min)
                min = grade[i][j];
        }
        for (int j = 0; j < M; ++j) {
            if (grade[i][j] != max && grade[i][j] != min) {
                sum += grade[i][j];
            }
        }
//        printf("%d %d %f\n",max,min,sum);
        average[i] = sum / (M-2);
        max = min =  0;
        sum = 0;
    }
}