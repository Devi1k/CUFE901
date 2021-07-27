//
// Created by 57054 on 2020/11/13.
//
#include "stdlib.h"
#include "stdio.h"

struct goods {
    int NO;
    char name[10];
    int NUM;
};

int main(void) {
    FILE *fp1, *fp2;
    struct goods temp;
    if ((fp1 = fopen("C:\\goods\\INFO.dat", "rb")) == NULL) {
        fprintf(stderr, "Cannot open INFO");
        exit(EXIT_FAILURE);
    }
    if ((fp2 = fopen("C:\\goods\\KK.dat", "wb")) == NULL) {
        fprintf(stderr, "Cannot open KK");
        exit(EXIT_FAILURE);
    }
    while (fread(&temp, sizeof(struct goods), 1, fp1)) {
        if (temp.NUM > 50) {
            fprintf(fp2,"%d %s %d\n",temp.NO,temp.name,temp.NUM);
            printf("%s\n",temp.name);
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;

}
