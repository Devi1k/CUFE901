//
// Created by 57054 on 2020/10/29.
//
#include "stdio.h"

float calculate(float fund, float rate, int month) {
    float monthRate = rate / 12;
    float money;
    for (int i = 0; i < month; ++i) {
        if (i == 0) {
            money = fund * (1 + monthRate);
        } else
            money = (money + fund) * (1 + monthRate);
    }
    return money;
}


int main(void) {
    printf("%.2f", calculate(100, 0.05, 2));
    return 0;
}