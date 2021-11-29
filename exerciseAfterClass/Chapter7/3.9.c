//
// Created by 57054 on 2020/10/30.
//

#include "stdio.h"
#include "string.h"

void sort1(char *p[], int n) {
    int k;
    char *temp;
    for (int i = 0; i < n-1; ++i) {
        k = i;
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(p[k], p[j]) > 0)
                k = j;
        }
        if (k != i) {
            temp = p[k];
            p[k] = p[i];
            p[i] = temp;
        }
    }
}

void sort2(char **p,int n){
    int k;
    char *temp;
    for (int i = 0; i < n -1; ++i) {
        k = i;
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(*(p+k), *(p+j)) > 0)
                k = j;
        }
        if (k != i) {
            temp = *(p+k);
            *(p+k) = *(p+i);
            *(p+i) = temp;
        }
    }
}

int main(void) {
    char name[10][20] = {"QWE","ZXCV","XZCV","GSFD","REW","YHOIU","KHJ","MVBN","RBGT","TYJU"};

    char *p[10],**p2;
    for (int i = 0; i < 10; ++i) {
        p[i] = name[i];
    }
    p2 = p;
    sort1(p, 10);
//    sort2(p2, 10);
    for (int i = 0; i < 10; ++i) {
        puts(p[i]);
    }
    return 0;
}

