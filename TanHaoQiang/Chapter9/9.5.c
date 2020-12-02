//
// Created by 57054 on 2020/12/2.
//
#include "stdio.h"

#define N 5
struct student {
    int num;
    char name[10];
    float grade[3];
};

int main(void) {
    float sum, average[N], max;
    int mark;
    struct student students[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &students[i].num);
        scanf("%s",students[i].name);
        for (int j = 0; j < 3; ++j) {
            scanf("%f", &students[i].grade[j]);
        }
    }

    for (int i = 0; i < N; ++i) {
        sum = 0;
        for (int j = 0; j < 3; ++j) {
            sum += students[i].grade[j];
        }
        average[i] = sum / 3;
    }
    max = average[0];
    for (int i = 0; i < N; ++i) {
        if (max < average[i]) {
            mark = i;
            max = average[i];
        }
    }
    printf("No.%d %s ",students[mark].num,students[mark].name);
    for (int i = 0; i < 3; ++i) {
       printf("%.2f ",students[mark].grade[i]);
    }
    return 0;
}
