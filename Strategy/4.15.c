//
// Created by 57054 on 2020/12/23.
//
#include "stdio.h"
#include "string.h"

int main(void) {
    int flag = 0,count = 0,j = 0;
    char s[80];
    char str[20][80];
    gets(s);
    for (int i = 0; i<=strlen(s); ++i) {
        if (s[i]!=' ')
            str[count][j++] = s[i];
        else{
            str[count][j] = '\0';
            j = 0;
            count++;
        }
    }
    count++;
    printf("%d",count);
    return 0;
}
