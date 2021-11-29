//
// Created by 57054 on 2020/10/21.
//
#include "stdio.h"
#include "stdlib.h"

int main(void) {
    FILE *fp1, *fp2;
    char ch, ch1, ch2;
    int i;
    if ((fp1 = fopen("file1.txt", "r")) == NULL) {
        fprintf(stderr, "Cannot open this file");
        exit(EXIT_FAILURE);
    }
    if ((fp2 = fopen("file2.dat", "w")) == NULL) {
        fprintf(stderr, "Cannot open this file");
        exit(EXIT_FAILURE);
    }
    int number[10] = {0}, alpha[26] = {0};
    while (!feof(fp1)) {
        ch = fgetc(fp1);
        if (ch <= 'z' && ch >= 'a')
            alpha[ch - 'a']++;
        else if (ch <= 'Z' && ch >= 'A')
            alpha[ch - 'A']++;
        else if (ch <= '9' && ch >= '0')
            number[ch - '0']++;
    }
    for (i = 0, ch1 = 'a', ch2 = 'A'; i < 26; ++i, ch1++, ch2++) {
        printf("%c/%c:%d\n", ch1, ch2, alpha[i]);
        fprintf(fp2, "%c/%c:%d\n", ch1, ch2, alpha[i]);
    }
    for (int j = 0; j < 10; ++j) {
        printf("%d:%d\n", j, number[j]);
        fprintf(fp2, "%d:%d\n", j, number[j]);
    }
    return 0;
}
