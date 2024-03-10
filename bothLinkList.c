//
// Created by HUANYU on 2024/3/10.
//
#include <stdio.h>
#include <stdlib.h>
#include "bothLinkList.h"


void initBthList(BthNode head){
    head->next = NULL;
    head->prev = NULL;
}

_Bool insertBthList(BthNode head,E element,int index){
    if(index<1)return 0;
    while (--index){
        head = head->next;
        if(head==NULL)return 0;
    }
    BthNode bthNode = malloc(sizeof (struct BothListNode));
    if(bthNode==NULL)return 0;
    bthNode->element = element;
    if(head->next !=NULL){
        bthNode->next = head->next;
        head->next->prev = bthNode;
    } else{
        bthNode->next = NULL;
    }
    head->next = bthNode;
    bthNode->prev = head;

    return 1;
}

_Bool deleteBthList(BthNode head,int index){
    if (index < 1) return 0;
    while (--index) {
        head = head->next;
        if (head == NULL)return 0;
    }
    if(head->next==NULL)return 0;
    BthNode temp = head->next;
    if(head->next->next){
        head->next = head->next->next;
        head->next->prev = head;
    } else{
        head->next = NULL;
    }
    free(temp);
    return 1;
}

void printBtnLinkList(BthNode node){
    do {
        node = node->next;
        printf("%d -> ",node->element);
    } while (node->next!=NULL);
    printf("\n");
    do {
        printf("%d -> ",node->element );
        node=node->prev;
    } while (node->prev!=NULL);
}