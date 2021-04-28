//
// Created by 倪泽溥 on 2021/4/27.
//

#include "stdio.h"

struct {
    int x;
    char *y;
} *p, A[4] = {
        1, "for",
        2, "while",
        3, "do_while",
        4, "switch"
};

int main() {
    p = A;
    printf("%d", ++p->x);
    printf("%d", ++(p->x));
    printf("%d", (p++)->x);
    printf("%d", p++->x);
    printf("%c", *p->y);
    printf("%c", *p->y++);
    printf("%c", *p++->y);
    for (int i = 0; i < 4; ++i) {
        printf("\n%d,%s", A[i].x, A[i].y);
    }
}