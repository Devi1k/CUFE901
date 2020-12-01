//
// Created by 57054 on 2020/11/30.
//
#include "stdio.h"
#include "string.h"

void sort(char *p[], int n) {
    char *temp;
    int k;
    for (int i = 0; i < n - 1; ++i) {
        k = i;
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(p[k], p[j]) > 0)
                k = j;
        }
        if (k!=i){
            temp = p[k];
            p[k] = p[i];
            p[i] = temp;
        }
    }
}


int main(void) {
    char a[3][80], *p[3];
    for (int i = 0; i < 3; ++i) {
        gets(a[i]);
    }
    for (int i = 0; i < 3; ++i) {
        p[i] = a[i];
    }
    sort(p, 3);
    for (int i = 0; i < 3; ++i) {
        puts(p[i]);
    }
    return 0;

}
