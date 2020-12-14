//
// Created by 57054 on 2020/12/14.
//
#include "stdio.h"
#include "math.h"

void HalfInsertSort(int a[], int len) {
    int i, j, temp;
    int low, high, mid;
    for (i = 1; i < len; ++i) {
        temp = a[i];
        low = 0;
        high = i - 1;
        while (low <= high) {
            mid = (low + high) / 2;
            if (a[mid] > temp)
                high = mid - 1;
            else
                low = mid + 1;
        }
        for (j = i - 1; j > high; --j) {
            a[j + 1] = a[j];
        }
        a[high + 1] = temp;
    }
}


int main(void) {
    int i, a[10] = {12, 32, 33, 41, 35, 36, 73, 88, 19, 100};
    HalfInsertSort(a, 10);
    for (i = 0; i < 10; ++i) {
        printf("%d ", a[i]);
    }
    return 0;
}

