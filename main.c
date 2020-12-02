//
// Created by 57054 on 2020/11/7.
//

#include "stdio.h"
#include "string.h"
struct ss{
    int a;
    float b;
}students;
struct ss get(int a,struct ss five){
    struct ss ww;
    ww = students;
    return ww;
}

int main(void) {
    char str[10],temp[10] = "Control";
    for (int i = 0; i < 4; ++i) {
        gets(str);
        if (strcmp(temp,str)<0)
            strcpy(temp,str);
    }
    puts(temp);
}