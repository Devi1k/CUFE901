//
// Created by 倪泽溥 on 2021/4/27.
//
#include "stdio.h"
#include "string.h"

int main(void) {
    char *s[] = {"boy", "girl", "mother", "father"};
    char **st;
    st = s;
    for (int i = 1; i < 4; ++i) {
        if (strcmp(*st, s[i]) < 0){
            *st=s[i];
        }
    }
    printf("%s\n",*st);
}
