//
// Created by 57054 on 2020/10/20.
//
#include "stdio.h"
#include "stdlib.h"

int main(void) {
    FILE *fp1, *fp2;
    char ch;
    if ((fp1 = fopen("c1.txt", "r")) == NULL) {
        fprintf(stderr, "Cannot open this file");
        exit(EXIT_FAILURE);
    }
    if ((fp2 = fopen("c2.txt", "w")) == NULL) {
        fprintf(stderr, "Cannot open this file");
        exit(EXIT_FAILURE);
    }
    while (!feof(fp1)) {
        ch = fgetc(fp1);
        fputc(ch, fp2);
    }
    rewind(fp1);
    while (!feof(fp1)) {
        ch = fgetc(fp1);
        if (ch <= 'z' && ch >= 'a')
            ch = ch - 32;
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
