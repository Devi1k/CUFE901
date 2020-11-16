//
// Created by 57054 on 2020/11/9.
//
#include "stdio.h"
#include "stdlib.h"
#define N 10
struct staff{
    int num;
    char name[10];
    char phone[11];
};

struct staff *R_Info1(struct staff *personInfo){
    FILE *fp;
    if((fp = fopen("info.dat","rb"))==NULL){
        fprintf(stderr,"Cannot open this file");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < N; ++i) {
        fread(&personInfo[i],sizeof(struct staff),1,fp);
    }
    return personInfo;

}

void W_Info1(struct staff *staff){
    for (int i = 0; i < N; ++i) {
        printf("%d %s %s\n",staff[i].num,staff[i].name,staff[i].phone);
    }
}

void W_Info2(struct staff *staff){
    FILE *fp;
    if((fp = fopen("info.dat","wb"))==NULL){
        fprintf(stderr,"Cannot open this file");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < N; ++i) {
        fwrite(&staff[i],sizeof(struct staff),1,fp);
    }
}

int main(void){
    struct staff personInfo[N];
    R_Info1(personInfo);
    W_Info1(personInfo);
    W_Info2(personInfo);
    return 0;
}


