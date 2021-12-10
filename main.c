#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            if ((j - i) > 4 || (j - i) < -4 || (j + i) < 6 || (j + i) > 14)
                printf(" ");
            else if ((i + j) >= 6 && (i + j) <= 14 && (j - i) <= 4 && (j - i) >= -4)
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
