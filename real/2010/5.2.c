//
// Created by 倪泽溥 on 2021/4/28.
//
#include "stdio.h"

int main() {
    char b[17] = "0123456789ABCDEF";
    int i = 0, m, h, n, c[10];
    scanf("%d %d", &m, &h);
    do {
        c[i++] = m % h;
    } while ((m = m / h) != 0);
    for (--i; i >= 0; --i) {
        n = c[i];
        printf("%c", b[n]);
    }
}
