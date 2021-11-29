//
// Created by 57054 on 2020/11/28.
//
#include "stdio.h"
#include "math.h"

float fun(float x) {
    float p;
    p = x * (2 * x * (x - 2) + 3) - 6;
    return p;
}

int main(void) {
    float m = -10, n = 10, q;
    while (fabs(m - n) > 1e-5) {
        q = (m + n) / 2;
        if (fun(m) * fun(n) < 0) {
            if (fun(q) > 0)
                n = q;
            else
                m = q;
        } else
            break;
    }
    printf("%f", q);
    return 0;

}
