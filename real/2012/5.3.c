//
// Created by 57054 on 2020/11/7.
//
#include "stdio.h"

int main(void) {
    int k[] = {4, 2, 7, 10, 4, 7, 1, 6, 2};
    int len = sizeof(k) / sizeof(int);
    int i, j, mark, length, count = 0;
    int temp;
    length = len;
    //压缩
    for (i = 0; i < len; ++i) {
        mark = i;
        for (j = i + 1; j < len; ++j) {
            if (k[j] == k[mark]) {
                for (int l = j; l < len; ++l) {
                    k[l] = k[l + 1];
                }
                len--;
            }
        }
    }
    //排序
    for (i = 0; i < len - 1; ++i) {
        mark = i;
        for (j = i + 1; j < len; ++j) {
            if (k[mark] > k[j])
                mark = j;
        }
        if (mark != i) {
            temp = k[mark];
            k[mark] = k[i];
            k[i] = temp;
        }
    }
    for (i = 0; i < len; ++i) {
        printf("%d ",k[i]);
    }
    return 0;
}


