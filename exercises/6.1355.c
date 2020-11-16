//
// Created by 57054 on 2020/11/11.
//
#include "stdio.h"
#include "string.h"

int main(void) {
    char a[80], b[80];
    int alen, blen;
    gets(a);
    gets(b);
    alen = strlen(a);
    blen = strlen(b);
    char max = a[0];
    int mark = 0;
    for (int i = 0; i < alen; ++i) {
        if (max < a[i]) {
            mark = i;
            max = a[i];
        }
    }
    mark++;
    for (int i = 0; i <= alen - mark; ++i) {
        a[mark + blen+i] = a[mark+i];
    }
    for (int i = 0; i < blen; ++i) {
        a[mark++] = b[i];
    }
//    a[mark] = '\0';
    puts(a);
    return 0;
}
