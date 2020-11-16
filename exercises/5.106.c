//
// Created by 57054 on 2020/10/14.
//

#include <stdio.h>
#include <math.h>
int main(void) {
    int x, y;

    for (int i = 1; i < 100 ; ++i) {
        x = i % 10;
        if(x == sqrt(i)){
            printf("%3d",i);
        }
    }
}