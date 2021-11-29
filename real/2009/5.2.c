//
// Created by 57054 on 2020/11/9.
//
#include "stdio.h"
#include "string.h"

void sort(char *name[], int n) {
    char *temp;
    int k;
    for (int i = 0; i < n-1; ++i) {
        k = i;
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(name[k], name[j]) > 0)
                k = j;
        }
        if (k != i) {
            temp = name[k];
            name[k] = name[i];
            name[i] = temp;
        }
    }
}

int main(void) {
    char s[10][80];
    for (int i = 0; i < 10; ++i) {
        gets(s[i]);
    }
    char *name[10];
    for (int i = 0; i < 10; ++i) {
        name[i] = s[i];
    }
    puts("Before:");
    for (int i = 0; i < 10; ++i) {
        puts(name[i]);
    }
    sort(name, 10);
    puts("After:");
    for (int i = 0; i < 10; ++i) {
        puts(name[i]);
    }
    return 0;

}