//
// Created by 57054 on 2020/11/15.
//
#include "stdio.h"

#define MN 100
long code[MN];
float money[MN];

int main(void) {
    int u, v, n;
    long t_code;
    float t_money;
    n = 0;
    printf("Enter code:");
    scanf("%ld", &t_code);
    while (t_code > 0) {
        scanf("%f", &t_money);
        u = 0;
        while (t_code > code[u] && u < n)
            u++;
        if (code[u] == t_code)
            money[u] += t_money;
        else {
            for (v = n; v > u; --v) {
                code[v] = code[v - 1];
                money[v] = money[v - 1];
            }
            code[u] = t_code;
            money[u] = t_money;
            n++;
        }
        printf("Enter next:");
        scanf("%ld", &t_code);
    }
    for (u = 0; u < n; ++u) {
        printf("%ld %f\n", code[u], money[u]);
    }

}
