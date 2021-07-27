//
// Created by 57054 on 2020/11/26.
//
#include "stdio.h"

int main(void) {
    char ch[2][5] = {"1234", "5678"}, *p[2];
    int s = 0;
    for (int i = 0; i < 2; ++i) {
        p[i] = ch[i];
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; p[i][j] > '\0'; j += 2) {
            printf("%d\n", p[i][j]); //ASC码
            s = 10 * s + p[i][j] - '0';
        }
    }
    printf("%d\n",s);
    return 0;
}
