//
// Created by 57054 on 2020/11/30.
//
#include "stdio.h"
#include "string.h"

void sort1(char s[][6]) {
    char temp[10];
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9 - i; ++j) {
            if (strcmp(s[j], s[j + 1]) < 0){
                strcpy(temp,s[j]);
                strcpy(s[j],s[j+1]);
                strcpy(s[j+1],temp);
            }
        }
    }
}

void sort2(char (*s)[6]){ //只能处理等长
    int i,j;
    char temp[6];
    for (i = 0; i < 9; ++i) {
        for (j = 0; j < 9 - i; ++j) {
            if (strcmp(s[j], s[j + 1]) < 0){
                strcpy(temp,s[j]);
                strcpy(s[j],s[j+1]);
                strcpy(s[j+1],temp);
            }
        }
    }
}


int main(void) {
    char str[10][6];
    for (int i = 0; i < 10; ++i) {
        gets(str[i]);
    }
    for (int i = 0; i < 10; ++i) {
        puts(str[i]);
    }
}
