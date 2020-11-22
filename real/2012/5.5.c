//
// Created by 57054 on 2020/11/22.
//
#include "stdio.h"
#include "stdlib.h"

struct node {
    int data;
    struct node *next;
};

/**
 * 创建链表
 * @param n 节点个数
 * @return 返回头节点
 */
struct node *create(int n) {
    struct node *p, *q, *head;
    p = q = (struct node *) malloc(sizeof(struct node));
    head = (struct node *) malloc(sizeof(struct node));
    head->next = p;
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

struct node *sub(struct node *head) {
    struct node *head1, *p, *s, *r;
    head1 = r = (struct node *) malloc(sizeof(struct node));
    p = head;
    while (p->next != NULL) {
        if (p->next->data % 2 == 0)
            p = p->next;
        else {
            s = p->next;
            r->next = s;
            p->next = s->next;
            r = r->next;
        }
    }
    r->next = NULL;
    return head1;
}


void output(struct node *head) {
    struct node *p;
    p = head->next;
    while (p != NULL) {
        printf("%3d", p->data);
        p = p->next;
    }
}

int main(void) {
    struct node *head, *head1;
    head = create(10);
//    output(head);
    head1 = sub(head);
    output(head);
    printf("\n");
    output(head1);
    return 0;
}
