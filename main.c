//
// Created by 57054 on 2020/11/7.
//

#include "stdio.h"

int main(void) {
    for (i = 1; i < 10; ++i) {
        t = a[i];
        for (j = i - 1; j >= 0 && (a[j] > t); --j) {
            a[j + 1] = a[j];
        }
        a[j + 1] = t;
    }
}