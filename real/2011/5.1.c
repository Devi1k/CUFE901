//
// Created by 57054 on 2020/10/21.
//
#include "stdio.h"
#include "string.h"

void insert(char s1[], char s2[], char ch) {
    int i;
    int alen = strlen(s1);
    int blen = strlen(s2);
    for (i = 0; i < alen; ++i) {
        if (s1[i] == ch)
            break;
    }
    for (int j = alen + blen - 1; j >= i + blen; --j) {
        s1[j] = s1[j - blen];
    }
    for (int j = 0; j < blen; ++j) {
        s1[i++] = s2[j];
    }
}

int main(void) {
    char s1[20] = "bcade ";
    char s2[20] = "eee";
    char ch = 'b';
    insert(s1, s2, ch);
    puts(s1);
    return 0;
}

