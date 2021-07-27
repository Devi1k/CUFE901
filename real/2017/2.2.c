//
// Created by 57054 on 2020/10/27.
//
#include "stdio.h"
#include "string.h"
#include "ctype.h"
char xx[50][80];

//int isalpha(char ch) {
//    if ((ch <= 'z' && ch >= 'a') || (ch >= 'A' && ch <= 'Z'))
//        return 1;
//    else
//        return 0;
//}

void FUNABC(int maxline) {
    int i, j, k, s, m, str1;
    char str[80];
    for (i = 0; i < maxline; ++i) {
        str1 = strlen(xx[i]);
        memset(str, 0, 80);
        s = k = 0;
        for (j = str1 - 1; j >= 0; --j) {
            if (isalpha(xx[i][j]))
                k++;
            else{
                for (m = 0; m <= k; ++m) {
                    str[s++] = xx[i][j+m];
                }
                k = 0;
            }
            if(!isalpha(xx[i][j]))
                str[s++] = ' ';
        }
        for (m = 1; m <= k; ++m) {
            str[s++] = xx[i][j+m];
        }
        str[s] = '\0';
        strcpy(xx[i],str);
    }

}

int main(void){
    gets(xx[0]);
    FUNABC(1);
    puts(xx[0]);
    return 0;
}

