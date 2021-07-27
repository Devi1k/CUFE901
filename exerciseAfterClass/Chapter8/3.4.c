//
// Created by 57054 on 2020/11/2.
//

#include "stdio.h"
#include "stdlib.h"

typedef struct stockInfo {
    int productID;
    double dPrice;
    double dDate;
    struct stockInfo *next;
} NODE;

NODE *create();

void insert(NODE *head, NODE *pnew, int i);

void display(NODE *head);

void Pfree(NODE *head);

int main(void) {
    NODE *head, *pnew;
    int pos = 0;
    head = create();
    if (head == NULL) {
        return 0;
    }
    printf("ouput 1 minute data:\n");
    display(head);
    printf("input 45 second,end with negative:\n");
    while (1) {
        pnew = (NODE *) malloc(sizeof(NODE));
        scanf("%d%lf%lf", &pnew->productID, &pnew->dPrice, &pnew->dDate);
        if (pnew->productID < 0) {
            free(pnew);
            break;
        }
        insert(head, pnew, pos);
        pos += 2;
    }
    printf("new chain:");
    display(head);
    Pfree(head);
    return 0;
}

NODE *create() {
    NODE *head, *tail, *pnew;
    int productID;
    double dPrice;
    double dDate;
    head = (NODE *) malloc(sizeof(NODE));
    if (head == NULL) {
        fprintf(stderr, "Error");
        exit(EXIT_FAILURE);
    }
    head->next = NULL;
    tail = head;
    printf("Enter 1 minute data:\n");
    while (1) {
        scanf("%d%lf%lf", &productID, &dPrice, &dDate);
        if (productID < 0)
            break;
        pnew = (NODE *) malloc(sizeof(NODE));
        if (pnew == NULL) {
            printf("Error");
            return NULL;
        }
        pnew->productID = productID;
        pnew->dPrice = dPrice;
        pnew->dDate = dDate;
        pnew->next = NULL;
        tail->next = pnew;
        tail = pnew;
    }
}