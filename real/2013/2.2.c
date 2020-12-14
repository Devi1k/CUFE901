#include "stdio.h"
#include "stdlib.h"

struct node {
    int data;
    struct node *next;
};

struct node *create() {
    struct node *p, *q, *head;
    head = (struct node *) malloc(sizeof(struct node));
    p = q = (struct node *) malloc(sizeof(struct node));
    head->next = p;
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
    if (q->next) {
        r->next = q->next;
        free(q);
    }
}

int main(void) {
    struct node *head1, *head2, *p;
    head1 = create();
    head2 = create();
    merge(head1, head2);
    p = head1;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    return 0;
}