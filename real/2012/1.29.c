//
// Created by 倪泽溥 on 2021/11/29.
//
#include "stdio.h"

union dt {
    int a;
    char b;
    double c;
} data;

int main() {
    data.a = 5;
    printf("%lf", data.c);
}
