//
// Created by 57054 on 2020/12/3.
//
#include "stdio.h"
#include "stdlib.h"

struct node {
    int num;
    float grade;
    struct node *next;
};

struct node *create() {
    struct node *p, *q, *head;
    head = p = q = (struct node *) malloc(sizeof(struct node));
    scanf("%d", &q->num);
    scanf("%f", &q->grade);
    while (q->num > 0) {
        p->next = q;
        p = q;
        q = (struct node *) malloc(sizeof(struct node));
        scanf("%d", &q->num);
        scanf("%f", &q->grade);
    }
    p->next = NULL;
    return head;
}

struct node *merge(struct node *a, struct node *b) {
    struct node *p;
    p = a;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = b;
    return a;
}

void sort(struct node *c) {
    struct node *p, *q, *k;
    int tempNum;
    float tempGrade;
    for (p = c; p->next != NULL; p = p->next) {
        k = p;
        for (q = p->next; q != NULL; q = q->next) {
            if (k->num > q->num)
                k = q;
        }
        if (k != p) {
            tempGrade = k->grade;
            k->grade = p->grade;
            p->grade = tempGrade;
            tempNum = k->num;
            k->num = p->num;
            p->num = tempNum;
        }
    }
}

void output(struct node *head) {
    struct node *p;
    p = head;
    while (p != NULL) {
        printf("%d:%f\n", p->num, p->grade);
        p = p->next;
    }
}

int main(void) {
    struct node *a, *b, *c, *p;
    a = create();
//    output(a);
    b = create();
//    output(b);
    c = merge(a, b);
    puts("Before sort:");
    output(c);
    puts("After sort:");
    sort(c);
    output(c);
    return 0;
}


