//
// Created by 倪泽溥 on 2021/4/27.
//
#include "stdio.h"
int main() {
    int i;
    double money = 0.0;
    for (i = 0; i < 5; i++) {
        money = (money + 1000) / (1 + 12 * 0.0063);
    }
    printf("%0.2f \n", money);
    return 0;
}


