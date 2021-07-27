//
// Created by 57054 on 2020/11/28.
//

#include "stdio.h"
#include "string.h"
int main(void) {
    char s1[80], s2[80];
    int n;
    gets(s1);
    gets(s2);
    int i, j;
    for (i = 0; s1[i] && s2[i]; ++i) {
        if (s1[i] != s2[i])
            break;
    }
    n = s1[i] - s2[i];
    printf("%d\n",n);
    printf("%d",strcmp(s1,s2));
    return 0;
}