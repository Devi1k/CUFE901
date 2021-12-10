//
// Created by 57054 on 2020/11/8.
//
#include "stdio.h"
#include "stdlib.h"

char encode(char ch) {
    int count;
    if ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A')) {
        if(ch <= 'z' && ch >= 'a'){
            count = ch - 'a' + 1;
            ch = 26 - count + 1 - 1 + 'a';
        }else{
            count = ch - 'A' + 1;
            ch = 26 - count + 1 - 1 + 'A';
        }

    }
    return ch;
}

char decode(char ch) {
    int count;
    if ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A')) {
        if(ch <= 'z' && ch >= 'a'){
            count = ch - 'a' + 1;
            ch = 27 - count - 1 + 'a';
        }else{
            count = ch - 'A' + 1;
            ch = 27 - count - 1 + 'A';
        }

    }
    return ch;
}

int main(void) {
    FILE *fpin, *fpout;
    char s[80];
    char ch;
    printf("2010 7.4");
    if ((fpin = fopen("text.txt", "w")) == NULL) {
        fprintf(stderr, "Cannot open this file");
        exit(EXIT_FAILURE);
    }
    while ((ch = getchar()) != '#') {
        ch = encode(ch);
        fputc(ch, fpin);
    }
    fclose(fpin);
    if ((fpout = fopen("text.txt", "r")) == NULL) {
        fprintf(stderr, "Cannot open this file");
        exit(EXIT_FAILURE);
    }
    while (!feof(fpout)) {
        ch = fgetc(fpout);
        ch = decode(ch);
        putchar(ch);
    }
    fclose(fpout);


}