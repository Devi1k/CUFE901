//
// Created by 57054 on 2020/11/6.
//
#include "stdio.h"
#include "stdlib.h"

struct node {
    int a;
    struct node *next;
};

struct node *create() {
    struct node *head, *p, *q;
    head = p = q = (struct node *) malloc(sizeof(struct node));
    scanf("%d", &q->a);
    while (q->a) {
        p->next = q;
        p = q;
        q = (struct node *) malloc(sizeof(struct node));
        scanf("%d", &q->a);
    }
    p->next = NULL;
    return head;
}

void sort(struct node *head) {
    struct node *mark, *temp, *p, *q;
    temp = (struct node *) malloc(sizeof(struct node));
    for (p = head; p->next != NULL; p = p->next) {
        mark = p;
        for (q = p->next; q != NULL; q = q->next) {
            if (mark->a < q->a) {
//                printf("%d %d\n",temp->a,q->a);
                mark = q;
            }
        }
        if (mark != p) {
            temp->a = mark->a;
            mark->a = p->a;
            p->a = temp->a;
        }
    }
}

int main(void) {
    struct node *head, *p;
    head = create();
    p = head;
    while (p != NULL) {
        printf("%d ", p->a);
        p = p->next;
    }
    printf("\n");
    sort(head);
    p = head;
    while (p != NULL) {
        printf("%d ", p->a);
        p = p->next;
    }
    return 0;
}
