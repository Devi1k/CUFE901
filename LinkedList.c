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
 * 创建头节点为空的单链表
 * @return head
 */
struct node *create() {
    struct node *p, *q, *head;
    head = p = (struct node *) malloc(sizeof(struct node));
    q = (struct node *) malloc(sizeof(struct node));
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
 * 头节点非空的链表
 * @return
 */
struct node *create() {
    struct node *head, *prev, *current;
    head = NULL;
    int num;
    scanf("%d", &num);
    while (num) {
        current = (struct node *) malloc(sizeof (struct node));
        if (head==NULL)
            head = current;
        else
            prev->next = current;
        current->next = NULL;
        current->a = num;
        prev = current;
        scanf("%d", &num);
    }
    free(current);
    return head;
}


/**
 * 创建循环链表
 * @return
 */
struct node *input() {
    struct node *head, *p, *q;
    int n = 0;
    head = NULL;
    p = q = (struct node *) malloc(sizeof(struct node));
    printf("Enter number from big to small:(end with -1:\n");
    scanf("%d", &p->data);
    while (p->data != -1) {
        n++;
        if (n == 1)
            head = p;
        else
            q->next = p;
        q = p;
        p = (struct node *) malloc(sizeof(struct node));
        scanf("%d", &p->data);
    }
    q->next = head;
    return q;
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
void delete (struct node *head) {
    struct node *p, *q, *h1;
    h1 = q = (struct node *) malloc(sizeof(struct node));
    //前节点
    q->next = head;
    p = q->next;
    //查找待删结点
    while (p != NULL) {
        q = q->next;
        p = p->next
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
            s = q->next;
            q->next = s->next;
            s->next = r->next;
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