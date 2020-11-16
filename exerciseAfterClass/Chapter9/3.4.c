//
// Created by 57054 on 2020/11/4.
//
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define MAXSIZE 81

int main(void) {
    long pos;
    char *pTemp;
    FILE *fpSrc, *fpTar;
    const char tableHeader[] = "ID,Number,Name,SaleNumber,Price,TotalNumber";
    char filename1[30] = "salelist.txt";
    char filename2[30];
    char Src_buf[MAXSIZE];
    if ((fpSrc = fopen(filename1, "r")) == NULL) {
        fprintf(stderr, "error");
        exit(EXIT_FAILURE);
    }
    fgets(Src_buf, MAXSIZE, fpSrc);
    while (!feof(fpSrc)) {
        fgets(Src_buf, MAXSIZE, fpSrc);
        memset(filename2, 0, sizeof(char) * 30);
        pos = strstr(Src_buf, ",") - Src_buf;
        strncpy(filename2, Src_buf, pos * sizeof(char));
        strcat(filename2,".txt");
        if ((fpTar = fopen(filename2, "w")) == NULL) {
            fprintf(stderr, "error");
            exit(EXIT_FAILURE);
        }
        fputs(tableHeader,fpTar);
        fputs("\n",fpTar);
        fputs(Src_buf,fpTar);
        fclose(fpTar);
    }
    fclose(fpSrc);
    return 0;
}

