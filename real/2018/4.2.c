//
// Created by 倪泽溥 on 2021/12/7.
//
#include <stdio.h>
#include<string.h>

struct
student {
    int num;
    char name[20];
    char sex;
} s[4], *p;

int main() {
    char *sname[] = {"Zhao", "Oian", "Sun", "Lil"};
    char csex[] = {'M', 'F'};

    int i;
    for (i = 0; i < 4; i++) {
        s[i].num = i + 1;
        strcpy(s[i].name, sname[i]);
        s[i].sex = csex[s[i].num % 2];
    }
    p = s;
    printf("(%s, %c)", p ->name, p ->sex);
}