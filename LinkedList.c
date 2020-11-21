//
// Created by 57054 on 2020/11/21.
//
#include "stdio.h"
#include "stdlib.h"

struct node {
    int data;
    struct node *next;
};
/**
 * create link list
 * @return head
 */
struct node *create() {
    struct node *p, *q, *head;
    head = p = q = (struct node *) malloc(sizeof(struct node));
    scanf("%d", &q->data);
    while (q->data) {
        p->next = q;
        p = q;
        q = (struct node *) malloc(sizeof(struct node));
        scanf("%d", &q->data);
    }
    p->next = NULL;
    return head;
}
/**
 * linklist bubble sort
 * @param head
 */

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
