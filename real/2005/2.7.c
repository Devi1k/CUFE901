//
// Created by 57054 on 2020/11/16.
//

#include "stdio.h"
int main(void) {
    struct w {
        char a;
        char b;
    };

    union u {
        struct w b;
        int a;
    } s;
    s.a = 0x6162;
    s.a++;
    printf("%c\n",s.b.a);
    printf("%c\n",s.b.b);
    return 0;
}
