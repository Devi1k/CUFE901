//
// Created by 57054 on 2020/11/3.
//
#include "stdlib.h"
#include "stdio.h"

int main(void) {
    char ch;
    FILE *fp1, *fp2;
    if ((fp1 = fopen("big", "w")) == NULL) {
        fprintf(stderr, "error");
        exit(EXIT_FAILURE);
    }
    if ((fp2 = fopen("small", "w")) == NULL) {
        fprintf(stderr, "error");
        exit(EXIT_FAILURE);
    }
    while ((ch = getchar()) != '\n') {
        if (ch <= 'z' && ch >= 'a') {
            fputc(ch,fp2);
            ch-=32;
        } else {
            fputc(ch,fp1);
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
