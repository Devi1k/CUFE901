//
// Created by 57054 on 2020/11/3.
//
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

#define MAXSIZE 81

int main(void) {
    long pos;
    char *pTempStr;
    FILE *fpStr, *fpTar;
    char filename1[30] = "accounting.txt";
    char filename2[30] = "Newaccounting.txt";
    char ps[] = "US";
    char pd[] = "RMB";
    char Src_buf[MAXSIZE];
    char Tar_buf[MAXSIZE];
    if ((fpStr = fopen(filename1, "r")) == NULL) {
        fprintf(stderr, "error");
        exit(EXIT_FAILURE);
    }
    if ((fpTar = fopen(filename2, "w")) == NULL) {
        fprintf(stderr, "error");
        exit(EXIT_FAILURE);
    }
    while (!feof(fpStr)) {
        fgets(Src_buf, MAXSIZE, fpStr);
        if ((pTempStr = strstr(Src_buf, ps)) != NULL) {
            memset(Tar_buf, 0, MAXSIZE * sizeof(char));
            strncpy(Tar_buf, Src_buf, pTempStr - Src_buf);
            strcat(Tar_buf, pd);
            strcat(Tar_buf, pTempStr + strlen(ps));
            strcpy(Src_buf,Tar_buf);
        }
        fputs(Src_buf,fpTar);
    }
    fclose(fpStr);
    fclose(fpTar);
    return 0;
 }
