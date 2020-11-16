//
// Created by 57054 on 2020/11/6.
//
#include "stdio.h"
#include "stdlib.h"

void sort(int a[], int n) {
    int temp;
    for (int i = 0; i < n - 1; ++i) {
        if ((i + 1) % 2) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (a[j] > a[j + 1]) {
                    temp = a[j + 1];
                    a[j + 1] = a[j];
                    a[j] = temp;
                }

            }
        } else {
            for (int j = n - (i+1) / 2; j > 0; --j) {
                if (a[j] < a[j - 1]) {
                    temp = a[j - 1];
                    a[j - 1] = a[j];
                    a[j] = temp;
                }
            }
        }

    }
}

int main(void) {
    int a[] = {6,5,3,1,8,7,2,4,9};
    for (int i = 0; i < 9; ++i) {
        printf("%d ",a[i]);
    }

}
