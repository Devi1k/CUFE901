//
// Created by 57054 on 2020/11/15.
//
#include "stdio.h"

#define NUM 5
struct book {
    char name[20];
    float price;
};

void sortbook(struct book term, struct book *pbook, int count) {
    struct book *q, *pend = pbook;
    for (int k = 0; k < count; ++k, pend++) ;
        for (; pbook < pend; pbook++) {
            if (pbook->price > term.price)
                break;
        }

    for (q = pend - 1; q >= pbook; q--) {
        *(q + 1) = *q;
    }
    *(q+1) = term;
}

void printfbook(struct book *pbook) {
    printf("%20s %6.2f\n", pbook->name, pbook->price);
}

int main(void) {
    struct book term, books[NUM];
    int count;
    for (count = 0; count < NUM;) {
        scanf("%s%f", term.name, &term.price);
        sortbook(term, books, count++);
    }
    for (count = 0; count < NUM; ++count) {
        printfbook(&books[count]);
    }
    return 0;
}