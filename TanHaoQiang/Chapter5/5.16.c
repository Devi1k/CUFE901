//
// Created by 57054 on 2020/11/28.
//
#include "stdio.h"

int main(void) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3 - i; ++j) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 3; i >= 1; --i) {
        for (int j = 0; j < 4 - i; ++j) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
