//
// Created by 57054 on 2020/12/3.
//
#include "stdlib.h"
#include "stdio.h"

struct node {
    int num;
    char name[10];
    struct node *next;
};

struct node *create() {
    struct node *p, *q, *head;
    head = p = q = (struct node *) malloc(sizeof(struct node));
    scanf("%d", &q->num);
    scanf("%s", q->name);
    while (q->num > 0) {
        p->next = q;
        p = q;
        q = (struct node *) malloc(sizeof(struct node));
        scanf("%d", &q->num);
        scanf("%s", q->name);
    }
    p->next = NULL;
    return head;
}

void search(struct node *a, struct node *b) {
    struct node *p, *q, *s, *t;
    q = (struct node *) malloc(sizeof(struct node));
    q->next = a;
    p = a;
    while (p != NULL) {
        s = b;
        while (s != NULL) {
            if (p->num == s->num) {
                t = p;
                q->next = p->next;
                p = p->next;
                free(t);
            }
            s = s->next;
        }
        q = p;
        p = p->next;
    }
}

void output(struct node *head) {
    struct node *p;
    p = head;
    while (p != NULL) {
        printf("%d:%s\n", p->num, p->name);
        p = p->next;
    }
}


int main(void) {
    struct node *a, *b;
    a = create();
    b = create();
    puts("A:");
    output(a);
    puts("B");
    output(b);
    search(a,b);
    puts("After A:");
    output(a);
}