//
// Created by 倪泽溥 on 2021/12/7.
//

#include "stdio.h"
int main(){
    char ch[2][5] = {"1234","5678"},*p[2];
    int s = 0;
    for (int i = 0; i < 2; ++i) {
        p[i] = ch[i];
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; p[i][j]>'\0'; j+=2) {
            printf("%d\n",p[i][j]);
            s = 10*s+p[i][j]-'0';
        }
    }
    printf("%d\n",s);
    return 0;
}