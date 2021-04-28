//
// Created by 倪泽溥 on 2021/4/27.
//

#include "stdio.h"

int main() {
    char f[] = "%10.10s\n", *a = "****************";
    for (int i = 0; i <= 4; ++i) {
        *(f + 2) = 2 * i + '0';
        *(f + 4) = 4 * i / 10 + '0';
        *(f + 5) = 4 * i % 10 + '0';
        printf(f, a);
    }
}