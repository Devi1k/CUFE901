//
// Created by 57054 on 2020/12/2.
//
#include "stdio.h"
#include "stdlib.h"

int main(void) {
    FILE *fp1, *fp2;
    char s1[80], temp;
    int i = 0, mark, n;
    if ((fp1 = fopen("A", "r")) == NULL) {
        fprintf(stderr, "Cannot open A");
        exit(EXIT_FAILURE);
    }
    if ((fp2 = fopen("B", "r")) == NULL) {
        fprintf(stderr, "Cannot open A");
        exit(EXIT_FAILURE);
    }
    while (!feof(fp1)) {
        s1[i++] = fgetc(fp1);
    }
    i--;
    while (!feof(fp2)) {
        s1[i++] = fgetc(fp2);
    }
    s1[i] = '\0';
    puts(s1);
    fclose(fp1);
    fclose(fp2);
    n = i;
    for (int j = 0; j < n - 1; ++j) {
        mark = j;
        for (int k = j + 1; k < n; ++k) {
            if (s1[mark] > s1[k]) {
                mark = k;
            }
        }
        if (mark != j) {
            temp = s1[mark];
            s1[mark] = s1[j];
            s1[j] = temp;
        }
    }
    puts(s1);
    return 0;
}
