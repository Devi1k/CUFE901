//
// Created by 倪泽溥 on 2021/4/27.
//
#include "stdio.h"
#include "stdlib.h"
int main(void){
    int x,n = sizeof(float);
    float a[20],b[10];
    FILE *fp;
    printf("\nintput:");
    scanf("%d",&x);
    fp = fopen("file.dat","wb+");
    if(fp==NULL){
        printf("file not open");
        exit(1);
    }
    for (int i = 0; i < 20; ++i) {
        a[i] = (i+1)+x*(i+1);
    }
    fwrite(a,n,20,fp);
    fseek(fp,(long)(n*x),0);
    fread(b,n,10,fp);
    for (int i = 0; i < 10; ++i) {
        printf("%5.0f",b[i]);
    }
    fclose(fp);
    printf("\n");
}