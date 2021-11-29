//
// Created by 倪泽溥 on 2021/4/27.
//


#include "stdio.h"

int main(void) {
    char *a;
    char f[] = "%11.2s";
    a = "******";
    printf("\n");
    for (int i = 0; i < 6; ++i) {
        *(f + 2) = '6' - i;
        printf(f, a);
        if (i == 0)
            printf("*\n");
        else if (i == 5)
            printf("***********");
        else {
            for (int j = 0; j < 2 * i - 1; ++j) {
                printf(" ");
            }
            printf("**\n");
        }

    }

}