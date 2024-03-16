//
// Created by HUANYU on 2024/3/16.
//
#include <stdio.h>
#include <stdlib.h>
#include "LinkStack.h"

void initLinkStack(SNode head){
    head->next = NULL;
}

_Bool pushLinkStack(SNode head,E element){
    SNode node = malloc(sizeof (struct SLinkNode));
    if(node==NULL)return 0;
    node->element = element;
    node->next = head->next;
    head->next = node;
    return 1;
}

_Bool isLinkEmpty(SNode head){
    return head->next == NULL;
}

E popLinkStack(SNode head){
    SNode tem = head->next;
    head->next = head->next->next;
    E e = tem->element;
    free(tem);
    return e;
}

void printLinkStack(SNode head){
    head = head->next;
    while (head){
        printf("%d ",head->element);
        head = head->next;
    }
    printf("\n");
}
