
#include "stdio.h"

char str[] = "PPPQWLTECH1\1\11Q\1QALMS1";

int main(void) {
    char ch;
    for (int k = 2; (ch = str[k]) != '\0'; ++k) {
        switch (ch) {
            case 'A':
                putchar('a');
                continue;
            case '1':
                break;
            case 1:
                while ((ch = str[++k]) != '\1' && ch != 0);
            case 9:
                putchar('#');
            case 'E':
            case 'L':
                continue;
            default:
                putchar(ch);
                continue;
        }
        putchar('*');
    }
    putchar('\n');
}
