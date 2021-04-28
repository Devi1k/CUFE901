//
// Created by 倪泽溥 on 2021/4/28.
//
#include "stdio.h"

int i = 0;

int moveMean(double *pDate, int nDay) {
    double new[100];
    float sum, ave;
    for (int j = 0; j < i; ++j) {
        sum = 0;
        if (j - nDay + 1 <= 0) {
            if (j == 0)
                new[j] = 0;
            else {
                new[j] = pDate[j - 1];
            }
        } else {
            for (int k = j - 1; j - k <= nDay; --k) {
                sum += pDate[k];
            }
            new[j] = sum / nDay;
        }
        printf("%lf\t", new[j]);
    }
    return 1;
}

int main(void) {
    double num[100];
    int day;
    puts("Enter nums, end with -1:");
    scanf("%lf", &num[i]);
    while (num[i] != -1) {
        i++;
        scanf("%lf", &num[i]);
    }
    num[i] = 0;

    puts("Enter x:");
    scanf("%d", &day);
    printf("Before:");
    for (int j = 0; j < i; ++j) {
        printf("%lf\t",num[j]);
    }
    puts("");
    printf("After:");
    moveMean(num,day);
    return 0;

}