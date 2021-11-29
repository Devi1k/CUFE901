//
// Created by 57054 on 2020/10/14.
//
#include <stdio.h>
#include <string.h>

int main(void) {
    char a[20] = "cehiknqtw";
    char s[] = "fbla";
    int i, k, j;
    for (k = 0; s[k] != '\0'; ++k) {
        j = 0;
        while (s[k] >= a[j] && a[j] != '\0')
            j++;
        for (i = strlen(a); i >=j; --i) {
            a[i] = a[i-1];
        }
        a[j]  = s[k];
    }
    puts(a);
}
