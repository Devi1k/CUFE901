//
// Created by 57054 on 2020/10/17.
//
#include <stdio.h>

int count(char *str, char *sub) {
    int i, j, k, num = 0;
    for (i = 0; str[i]; ++i) {
        for (j = i, k = 0; sub[k] == str[j]; ++k, ++j) {
            if (sub[k+1] == '\0'){
                num++;
                break;
            }
        }
    }
    return num;
}


int main(void) {
    char str[80], sub[80];
    gets(str);
    gets(sub);
    printf("%d",count(str,sub));
}
