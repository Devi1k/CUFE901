//
// Created by 57054 on 2020/10/14.
//
#include <stdio.h>

int main(void) {
    int a, d, i, s, f, x;
    for (a = 1; a <= 6; ++a) {
        for (d = 1; d <= 5; ++d) {
            s = 0;
            f = 1;
            x = a;
            for (i = 1; i <= 4; ++i) {
                s = s + x;
                f = f * x;
                x = x + d;
            }
            if (s == 26 && f == 880)
                for (i = 0; i < 10; ++i) {
                    printf("%3d", a + i * d);
                }
        }
    }
}
