//
// Created by 57054 on 2020/11/6.
//
#include "stdio.h"
#include "stdlib.h"

void shell_sort(int arr[], int len) {
    int gap, i, j;
    int temp;
    for (gap = len >> 1; gap > 0; gap = gap >> 1)
        for (i = gap; i < len; i++) {
            temp = arr[i];
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap)
                arr[j + gap] = arr[j];
            arr[j + gap] = temp;
        }
}


int main() {
    int a[10] = {6, 5, 3, 1, 8, 7, 2, 4};
    shell_sort(a, 8);
    for (int i = 0; i < 8; ++i) {
        printf("%d ", a[i]);
    }
}