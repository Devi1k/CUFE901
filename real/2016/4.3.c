//
// Created by 57054 on 2020/10/22.
//
#include "stdio.h"
#include "stdlib.h"

typedef int DataType;
typedef struct NodeType {
    DataType data;
    struct NodeType *next;
} ListNode;
typedef ListNode *LinkList;
LinkList g_p = NULL;
LinkList head = NULL;

LinkList CreateLinkListInTail(LinkList L) {
    LinkList tmp = NULL;
    DataType data = 0;
    int i = 1;
    int NodeCount = 0;
    printf("Enter number:\n");
    scanf("%d", &NodeCount);
    L = (ListNode *) malloc(sizeof(ListNode));
    printf("Input the Node%d:\n", i);
    scanf("%d", &data);
    L->data = data;
    L->next = NULL;
    head = L;
    while (--NodeCount) {
        printf("Please input the Node %d:\n", ++i);
        scanf("%d", &data);
        tmp = (ListNode *) malloc(sizeof(ListNode));
        tmp->data = data;
        tmp->next = NULL;
        L->next = tmp;
        L = L->next;
        tmp = NULL;
    }
    return head;
}

void DisplayAllDataBySeq(LinkList L){
    while(NULL!=L){
        printf("%d ",L->data);
        L = L->next;
    }
    printf("\n");
}

int main(void){
    LinkList  p = NULL;
    g_p = CreateLinkListInTail(p);
    DisplayAllDataBySeq(g_p);
    return 0;
}