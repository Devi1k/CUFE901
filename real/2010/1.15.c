//
// Created by 倪泽溥 on 2021/4/28.
//
#include "stdio.h"

int main(){
    static int a[4] = {1,10,100,1000},b[4];
    int k;
    FILE *fp;
    if((fp= fopen("file1","w+"))==NULL)
        return 0;
    fwrite(a,sizeof (int),4,fp);
    rewind(fp);
    fread(b,sizeof (int),4,fp);
    for (k = 0; k < 4; ++k) {
        printf("%d ",b[k]);
    }
    fclose(fp);
}