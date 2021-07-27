//
// Created by 57054 on 2020/11/7.
//

#include "stdio.h"
#include "string.h"

struct ss {
    int a;
    float b;
} students;

struct ss get(int a, struct ss five) {
    struct ss ww;
    ww = students;
    return ww;
}

int main(void) {
    double d = 3.2;
    int x, y;
    x = 1.1;
    y = (x + 3.9) / 5.0;
    printf("%d",d*y);
    return 0;
}