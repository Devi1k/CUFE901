//
// Created by 57054 on 2020/12/21.
//
#include "stdio.h"
#include "string.h"

int main(void) {
    char a[80] = {0}, max;
    char b[3] = "ab";
    int i = 0, j = 0;
    printf("Input a string:\n");
    gets(a);
    puts(a);
    puts(b);
    max = a[0];
    while (a[i]) {
        if (a[i] > max) {
            max = a[i];
            j = i;
        }
        i++;
    }
    for (i = strlen(a) + strlen(b) - 1; i > j; --i) {
        a[i] = a[i - strlen(b)];
    }
    j = 0;
    i++;
    while (b[j]) {
        a[i] = b[j];
        i++;
        j++;
    }
    puts(a);
    return 0;
}

