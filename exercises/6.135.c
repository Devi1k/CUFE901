//
// Created by 57054 on 2020/10/16.
//
#include <stdio.h>
#include <string.h>

int main(void) {
    char a[80], b[80], c;
    int k = 0;
    gets(a);
    gets(b);
    for (int i = 0; i < strlen(a) - 1; ++i) {
        k = i;
        for (int j = i + 1; j < strlen(a); ++j) {
            if (a[j] > a[k])
                k = j;
        }
    }
    k++;
    for (int l = strlen(a) + strlen(b) - 1; l >= k+strlen(b)-1; --l) {
        a[l] = a[l - strlen(b)];
    }
    for (int m = 0; m < strlen(b); ++m) {
        a[k++] = b[m];
    }
    puts(a);
}
