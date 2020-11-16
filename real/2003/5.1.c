//
// Created by 57054 on 2020/11/16.
//

#include "stdio.h"

#define N 9

int main(void) {
    int a[N + 1], n, t;
    for (int i = 1; i <= N; ++i) {
        scanf("%d", &a[i]);
    }
    puts("Enter the number of position:");
    scanf("%d", &n);
    t = a[n];
    a[n] = a[1];
    a[1] = t;
    int num = a[1];
    for (int i = 2; i <= N; ++i) {
        if (a[i] < num){
            a[0] = a[i];
            for (int j = i; j > 0 ; --j) {
                a[j] = a[j-1];
            }
        }
    }

    for (int i = 1; i <= N; ++i) {
        printf("%5d",a[i]);
    }
    return 0;
}