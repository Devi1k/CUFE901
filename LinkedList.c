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
 * 创建链表
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
 * 单链表选择排序
 * @param head
 */
void SelectionSort(struct node *head) {
    struct node *p, *q, *temp;
    int t;
    for (p = head; p->next != NULL; p = p->next) {
        temp = p;
        for (q = p->next; q != NULL; q = q->next) {
            if (q->data > temp->data) {
                temp = q;
            }
        }
        if (temp != p) {
            t = temp->data;
            temp->data = p->data;
            p->data = t;
        }
    }
}


/**
 * 单链表冒泡排序
 * @param head
 */

void BubbleSort(struct node *head) {
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

/**
 * 删除某结点
 * @param head
 */
void delete(struct node *head) {
    struct node *p, *q, *h1;
    h1 = q = (struct node *) malloc(sizeof(struct node));
    //前节点
    q->next = head;
    p = q->next;
    //查找待删结点
    while (p != NULL) {
        continue;
    }
    //delete
    q->next = p->next;
    free(p);
    free(h1);
}

/**
 * 将p,q两个带头结点的有序递增链表合并，重复节点删除
 * @param p
 * @param q
 */
void merge(struct node *p, struct node *q) {
    struct node *s, *r;
    r = p;
    while (r->next) {
        if (r->next->data < q->next->data)
            r = r->next;
        else if (r->next->data > q->next->data) {
            s = r->next;
            r->next = s;
            r = r->next;
        } else {
            r = r->next;
            s = q->next;
            q->next = s->next;
            free(s);
        }
    }
    if (r->next == NULL) {
        r->next = q->next;
        free(q);
    }

}