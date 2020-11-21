//
// Created by 57054 on 2020/11/21.
//
#include "stdio.h"
#include "stdlib.h"

#define N 5
struct node {
    int data;
    struct node *next;
};

struct node *create() {
    struct node *p, *q, *head;
    int n = N;
    head = p = q = (struct node *) malloc(sizeof(struct node));
    scanf("%d", &q->data);
    while (n--) {
        p->next = q;
        p = q;
        q = (struct node *) malloc(sizeof(struct node));
        if (n == 0)
            break;
        scanf("%d", &q->data);
    }
    p->next = NULL;
    return head;
}

void sort(struct node *head) {
    struct node *p, *pend = NULL;
    int temp;
    p = head;
    while (p != pend) {
        while (p->next != pend) {
            if (p->data < p->next->data) {
                temp = p->data;
                p->data = p->next->data;
                p->next->data = temp;
            }
            p = p->next;
        }
        pend = p;
        p = head;
    }
}

int main(void) {
    struct node *head,*p;
    head = create();
    p = head;
    while (p!=NULL){
        printf("%d ",p->data);
        p = p->next;
    }
    puts("\n");
    sort(head);
    printf("After sorting:");
    p = head;
    while (p!=NULL){
        printf("%d ",p->data);
        p = p->next;
    }
    return 0;

}
