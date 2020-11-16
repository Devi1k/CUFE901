//
// Created by 57054 on 2020/10/12.
//
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define LEN 256

int getline(char *s, int len) {
    char c;
    char *p = s;
    while (--len > 0 && (c = getchar()) != '\n')
        *s++ = c;
    *s = '\0';
    return (s - p);
}

int main(void) {
    char line[LEN], b[20], *ptr1, *ptrb;
    int n = 0, j, a[50];
    getline(line, LEN);
    ptr1 = line;
    while (*ptr1 != '\0') {
        ptrb = b;
        for (j = 0; *ptr1 >= '0' && *ptr1 <= '9'; ptr1++, ptrb++, j++) {
            *ptrb = *ptr1;
        }
        if (j) {
            *ptrb = '\0';
            *(a + n) = atoi(b);
            n++;
        }
        if (*ptr1 != '\0')
            ptr1++;
    }
    printf("result is:\n");
    for (j = 0; j < n; ++j) {
        printf("%5d\n",*(a+j));
    }
    return 0;
}
