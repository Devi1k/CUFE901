//
// Created by 57054 on 2020/12/1.
//
#include "stdio.h"

void sort(int **p, int n) {
    int k, *temp1,temp2;
    for (int i = 0; i < n - 1; ++i) {
        k = i;
        for (int j = i + 1; j < n; ++j) {
            if (*p[k] > *p[j])
                k = j;
        }
//        if (k != i) {
//            temp1 = (*(p + k));
//            (*(p + k)) = (*(p + i));
//            (*(p + i)) = temp1;
//        }
        if (k != i) {
            temp2 = *(*(p + k));
            *(*(p + k)) = *(*(p + i));
            *(*(p + i)) = temp2;
        }
    }
}


int main(void) {
    int n, data[20], **p, *pstr[20];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        pstr[i] = &data[i];
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d", pstr[i]);
    }
    p = pstr;
    sort(p, n);
    for (int i = 0; i < n; ++i) {
        //printf("%3d", data[i]);
        printf("%3d",*pstr[i]);
    }
    return 0;
}
