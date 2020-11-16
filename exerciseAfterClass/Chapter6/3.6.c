//
// Created by 57054 on 2020/10/29.
//
#include "stdio.h"
#include "string.h"

#define CLIENT 3

int main(void) {
    char first_name[20][20], last_name[20][20], middle_name[20][20], tel[20][20], name[20][80], dummy[5];
    char temp[80];
    for (int i = 0; i < CLIENT; ++i) {
        scanf("%s%s%s", first_name[i], middle_name[i], last_name[i]);
        strcpy(name[i], last_name[i]);
        strcat(name[i], ",");
        dummy[0] = first_name[i][0];
        dummy[1] = '\0';
        strcat(name[i], dummy);
        strcat(name[i], ".");
        dummy[0] = middle_name[i][0];
        dummy[1] = '\0';
        strcat(name[i], dummy);
    }
    for (int i = 0; i < CLIENT - 1; ++i) {
        for (int j = 0; j < CLIENT - i - 1; ++j) {
            if (strcmp(name[j], name[j + 1]) > 0) {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }

    for (int i = 0; i < CLIENT; ++i) {
        puts(name[i]);
    }
    return 0;
}
