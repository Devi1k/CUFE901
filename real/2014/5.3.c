//
// Created by 57054 on 2020/10/12.
//
#include <stdio.h>
#include <string.h>

void maxword(char *s, char *t) {
    char p[20][80];
    int i, j = 0, m = 0;
    for (i = 0; i <= strlen(s); ++i) {
        if (s[i] != ' ')
            p[j][m++] = s[i];
        else {
            p[j][m] = '\0';
            j++;
            m = 0;
        }
    }
    j++;
    for (i = 0; i < j; ++i) {
        if(strstr(t,p[i])){
            printf("%s\n",p[i]);
        }
    }

}

int main(void) {
    char s[] = "This is C programming text";
    char t[] = "This is a text for C programming";
    maxword(s, t);
}




