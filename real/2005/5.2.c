//
// Created by 57054 on 2020/11/23.
//
#include "stdlib.h"
#include "stdio.h"

struct node {
    int num;
    struct node *next;
};


struct node *input() {
    struct node *head, *p, *q;
    int n = 0;
    head = NULL;
    p = q = (struct node *) malloc(sizeof(struct node));
    printf("Enter number from big to small:(end with -1:\n");
    scanf("%d", &p->num);
    while (p->num != -1) {
        n++;
        if (n == 1)
            head = p;
        else
            q->next = p;
        q = p;
        p = (struct node *) malloc(sizeof(struct node));
        scanf("%d", &p->num);
    }
    q->next = head;
    return q;
}


struct node *merge(struct node *pa, struct node *pb) {
    struct node *p1, *p2, *q1, *q2, *head;
    q1 = pb->next;
    pb->next = NULL;
    q2 = q1->next;
    head = pa->next;
    pa->next = NULL;
    p1 = p2 = head;
    while (p2 != NULL && q1 != NULL) {
        if (q1->num > p2->num) {
            if (head == p2) {
                head = q1;
                p1 = q1;
                p1->next = p2;
                q1 = q2;
                q2 = q2->next;
            } else {
                p1->next = q1;
                p1 = q1;
                p1->next = p2;
                q1 = q2;
                if (q2 != NULL)
                    q2 = q2->next;
                else
                    break;
            }
        } else {
            p1 = p2;
            p2 = p2->next;
        }
    }
    if (q1 == NULL) {
        pa->next = head;
        return pa;
    }
    if (p2 == NULL) {
        p1->next = q1;
        pb->next = head;
        return pb;
    }
}

void print(struct node *head) {
    struct node *p;
    p = head->next;
    while (p != head) {
        printf("%d ", p->num);
        p = p->next;
    }
    printf("%d ", p->num);
}


int main(void) {
    struct node *pa, *pb;
    printf("create pa:\n");
    pa = input();
    printf("create pb:\n");
    pb = input();
//    printf("before merge:\n");
//    print(pa);
    printf("\n");
//    print(pb);
    printf("after merge:\n");
    pa = merge(pa, pb);
    print(pa);
    return 0;
}
