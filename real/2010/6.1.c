//
// Created by 57054 on 2020/11/17.
//
#include "stdio.h"
#include "stdlib.h"

typedef struct aa {
    int data;
    struct aa *next;
} NODE;

NODE *CreatLink(int n, int m) {
    NODE *h = NULL, *p, *s;
    int i;
    p = (NODE *) malloc(sizeof(NODE));
    h = p;
    p->next = NULL;
    for (i = 1; i <= n; ++i) {
        s = (NODE *) malloc(sizeof(NODE));
        s->data = rand() % m;
        s->next = p->next;
        p->next = s;
        p = p->next;
    }
    return h;
}

void outLink(NODE *h) {
    NODE *p;
    p = h->next;
    printf("\nThe LIST:HEAD");
    while (p) {
        printf("->%d", p->data);
        p = p->next;
    }
    printf("\n");
}

int main(void) {
    NODE *head;
    head = CreatLink(8, 22);
    outLink(head);
}
