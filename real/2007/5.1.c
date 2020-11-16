//
// Created by 57054 on 2020/11/13.
//
#include "stdio.h"
#include "stdlib.h"

struct node {
    char ch;
    struct node *next;
};

struct node *create() {
    struct node *p, *q, *head;
    p = q = head = (struct node *) malloc(sizeof(struct node));
    scanf("%c", &q->ch);
    while (q->ch != '#') {
        p->next = q;
        p = q;
        q = (struct node *) malloc(sizeof(struct node));
        scanf("%c", &q->ch);
    }
    p->next = NULL;
    return head;
}

void search(struct node *s1, struct node *s2) {
    int flag = 0;
    struct node *p, *q, *h1, *k;
    q = h1 = (struct node *) malloc(sizeof(struct node));
    q->next = s1;
    p = q->next;
    //search
    while (p != NULL) {
        k = s2;
        while (k) {
            if (k->ch == p->ch) {
                flag = 1;
                break;
            } else
                k = k->next;
        }
        if (flag == 0){
            q = p;
            p = p->next;
        }
        else
            break;
    }
//    putchar(p->ch);
    //delete
    q->next = p->next;
    free(p);
    s1 = h1->next;
    free(h1);
}

int main(void) {
    struct node *s1, *s2;
    char ch;
    s1 = create();
    s2 = create();
//    while (s1){
//        putchar(s1->ch);
//        s1 = s1->next;
//    }
//    printf("\n");
//    while (s2){
//        putchar(s2->ch);
//        s2 = s2->next;
//    }
    search(s1, s2);
    while (s1) {
        putchar(s1->ch);
        s1 = s1->next;
    }
    return 0;
}
