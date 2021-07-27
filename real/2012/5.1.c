
#include "stdio.h"
#include "string.h"

int sub(char *s1, char *s2) {
    for (int i = 0; s1[i] || s2[i]; ++i) {
        if (s1[i] == s2[i])
            continue;
        else
            return (s1[i]-s2[i]);
    }
    return 0;

    while (*s1 != '\0' || *s2 != '\0') {
        if (*s1 == *s2) {
            s1++;
            s2++;
        } else
            return (*s1 - *s2);
    }
    return 0;
}

int main(void) {
    char s1[] = "abcdef";
    char s2[] = "abcdefb";
    printf("%d\n", sub(s1, s2));
    printf("%d\n", strcmp(s1, s2));
    return 0;
}
