//
// Created by 57054 on 2020/11/7.
//
#include "stdio.h"


int intimate_pair(int k) {
    int sum = 0;
    for (int i = 1; i < k; ++i) {
        if (k % i == 0)
            sum += i;
    }
    return sum;
}

int main(void) {
    for (int i = 2; i < 5000; ++i) {
        for (int j = 2; j < 5000; ++j) {
            if ((i == intimate_pair(j)) && (j == intimate_pair(i)) && i < j)
                printf("%d %d\n", i, j);
        }
    }
    return 0;
}
