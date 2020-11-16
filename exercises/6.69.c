//
// Created by 57054 on 2020/10/16.
//
#include <stdio.h>

int main(void) {
    int a[10] = {1,2,3,4,5,6,7,8,9,10}, b[10], i;
    for (i = 1; i < 10; ++i) {
        b[i] = a[i] + a[i - 1];
    }
    for (int j = 1; j < 10; ++j) {
        printf("%3d", b[j]);
        if (j % 3 == 0)
            printf("\n");
    }
    return 0;
}
