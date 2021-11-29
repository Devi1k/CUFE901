//
// Created by 57054 on 2020/11/3.
//
#include "stdio.h"
#include "stdlib.h"
int main(void) {
    FILE *fp;
    char name[80],ch;
    int count = 0;
    if ((fp = fopen("", "r")) == NULL) {
        fprintf(stderr,"error");
        exit(EXIT_FAILURE);
    }
    while(!feof(fp)){
        ch = fgetc(fp);
        if(ch=='\n')
            count++;
//        fgets(name,80,fp);
//        count++;
    }
    printf("%d",count);
    return 0;
}
