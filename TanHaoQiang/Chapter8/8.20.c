//
// Created by 57054 on 2020/12/1.
//
#include "stdio.h"
#include "string.h"

void sort(char **p) {
    int k;
    char *temp;
    for (int i = 0; i < 4; ++i) {
        k = i;
        for (int j = i + 1; j < 5; ++j) {
            if (strcmp(p[k], p[j]) > 0)
                k = j;
        }
        if (k != i) {
            temp = p[k];
            p[k] = p[i];
            p[i] = temp;
        }
    }
}

int main(void) {
    char **p, *str[5],string[5][80];
    for (int i = 0; i < 5; ++i) {
        str[i] = string[i];
    }
    for (int i = 0; i < 5; ++i) {
        gets(str[i]);
    }
    p = str;
    sort(p);
    for (int i = 0; i < 5; ++i) {
        puts(str[i]);
    }
}
