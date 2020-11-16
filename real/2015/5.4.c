//
// Created by 57054 on 2020/10/20.
//
#include "stdio.h"
#include "string.h"

void sort(char *str[], int n) {
    char *temp;
    int k;
    for (int i = 0; i < n - 1; ++i) {
        k = i;
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(str[j], str[k]) < 0)
                k = j;
        }
        if (k != i) {
            temp = str[k];
            str[k] = str[i];
            str[i] = temp;
        }
    }
}

int main(void) {
    char country[6][80];
    for (int i = 0; i < 6; ++i) {
        scanf("%s", country[i]);
    }
    char *name[] = {country[0],country[1],country[2],country[3],country[4],country[5]};
    sort(name, 6);
    for (int i = 0; i < 6; ++i) {
        puts(name[i]);
    }
    return 0;
}


