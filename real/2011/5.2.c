//
// Created by 57054 on 2020/10/21.
//
#include "stdio.h"

int main(void) {
    int a, b, c;
    for (a = 0; a <= 3; ++a) {
        for (b = 1; b <= 5; ++b) {
            for (c = 0; c < 6; ++c) {
                if (a + b + c == 8)
                    printf("%d+%d+%d\n", a, b, c);
            }
        }
    }
    return 0;
}
