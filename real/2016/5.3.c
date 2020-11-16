//
// Created by 57054 on 2020/10/23.
//
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int fun(char str[]) {
    int count = 0, i = 0, flag = 0;
    FILE *fp;
    char ch, s[80], word[10];
    if ((fp = fopen(str, "r")) == NULL) {
        fprintf(stderr, "Cannot open this file");
        exit(EXIT_FAILURE);
    }
    while (!feof(fp)) {
        ch = fgetc(fp);
        s[i++] = ch;
    }
//    puts(s);
    for (int j = 0, k = 0; j <= strlen(s); ++j) {
        if ((s[j] >= 'A' && s[j] <= 'Z') && (s[j + 1] >= 'A' && s[j + 1] <= 'Z')) {
            word[k++] = s[j];
        } else if ((s[j] >= 'A' && s[j] <= 'Z') && (s[j + 1] == ' ')) {
            word[k++] = s[j];
            word[k] = '\0';
            puts(word);
            count++;
            k = 0;
        }
    }
    return count;
}

int main(void) {
    char str[20];
    int count;
    puts("Enter the name of file:");
    gets(str);
    count = fun(str);
    printf("%d", count);
    return 0;
}
