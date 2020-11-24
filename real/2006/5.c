//
// Created by 57054 on 2020/11/24.
//
#include "stdio.h"
#include "stdlib.h"
struct node *head;
struct node *alpha;
struct node {
    char data;
    struct node *next;
};

struct node *create() {
    struct node *p, *q, *str;
    p = q = str = (struct node *) malloc(sizeof(struct node));
    while ((q->data = getchar()) != '#') {
        p->next = q;
        p = q;
        q = (struct node *) malloc(sizeof(struct node));
    }
    p->next = NULL;
    return str;
}


struct node *sub() {
    char ch;
    int n1 = 0, n2 = 0, n3 = 0;
    struct node *number, *p, *s, *q, *q3, *q1, *q2;
    q3 = (struct node *) malloc(sizeof(struct node));//其他字符
    q = (struct node *) malloc(sizeof(struct node));//其他字符
    q->next = head;
    p = head;
    q1 = (struct node *) malloc(sizeof(struct node)); //数字
    q2 = (struct node *) malloc(sizeof(struct node)); //字母
    while (p != NULL) {
        ch = p->data;
        if ((ch <= 'z' && ch >= 'a') || (ch >= 'A' && ch <= 'Z')) {
            q->next = p->next;
            s = p;
            n1++;
            if (n1 == 1)
                alpha = s;
            else
                q2->next = s;
            q2 = s;
        } else if (ch <= '9' && ch >= '0') {
            q->next = p->next;
            s = p;
            n2++;
            if (n2 == 1)
                number = s;
            else
                q1->next = s;
            q1 = s;
        } else {
            n3++;
            s = p;
            if (n3 == 1)
                head = p;
            else
                q3->next = p;
            q3 = s;
        }

        p = p->next;
    }
    q1->next = number;
    q2->next = alpha;
    q3->next = head;
    alpha = q2;
    head = q3;
    return q1;
}


void output(struct node *str) {
    struct node *p;
    p = str->next;
    while (p != str) {
        printf("%c", p->data);
        p = p->next;
    }
    printf("%c", p->data);
}


int main(void) {
    struct node *number = NULL;
    head = create();
    number = sub();
    output(alpha);
    printf("\n");
    output(number);
    printf("\n");
    output(head);
    return 0;
}
