//
// Created by 57054 on 2020/11/22.
//
#include "stdio.h"
#include "stdlib.h"


struct node {
    char ch;
    struct node *next;
};


struct node *create() {
    struct node *p, *q, *head;
    head = q = p = (struct node *) malloc(sizeof(struct node));
    while ((q->ch = getchar()) != '#') {
        p->next = q;
        p = q;
        q = (struct node *) malloc(sizeof(struct node));
    }
    p->next = NULL;
    return head;
}

struct node *sub(struct node *p, struct node *q) {
    struct node *s, *r, *t, *head;
    r = (struct node *) malloc(sizeof(struct node));
    t = (struct node *) malloc(sizeof(struct node));
    r->next = p;
    t->next = q;
    head = r;
    //    r = p;
    while (r->next && t->next) {
        if (r->next->ch < t->next->ch)
            r = r->next;
        else if (r->next->ch > t->next->ch) {
            s = t->next;
            t->next = s->next;
            s->next = r->next;
            r->next = s;
            r = r->next;
        } else {
            r = r->next;
            s = t->next;
            t->next = s->next;
            free(s);
        }
    }
    if (t->next) {
        r->next = t->next;
        free(t);
    }
    head = head->next;
    return head;
}

void output(struct node *head) {
    struct node *p;
    p = head;
    while (p != NULL) {
        printf("%c", p->ch);
        p = p->next;
    }
}


struct node *reversal(struct node *head) {
    struct node *temp = head;
    struct node *cur = NULL;

    while (temp->next) {
        cur = temp->next;
        if (cur->next != NULL) {
            temp->next = cur->next;
        } else {
            temp->next = NULL;
        }
        cur->next = head;
        head = cur;
    }
    return head;
}


int main(void) {
    struct node *s1, *s2;
    s1 = create();
    s2 = create();
    s1 = sub(s1, s2);
    output(s1);
    s1 = reversal(s1);
    output(s1);
    return 0;
}
