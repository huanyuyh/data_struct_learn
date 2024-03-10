//
// Created by HUANYU on 2024/3/10.
//
#include <stdio.h>
#include <stdlib.h>
#include "linkList.h"

void  initLinkList(Node node){
    node->next = NULL;
}

_Bool insertLinkList(Node head ,E element,int index){
    if(index<1) return 0;
    while (--index){
        head=head->next;
        if(head==NULL)return 0;
    }
    Node node = malloc(sizeof (struct LinkNode));
    if(node ==NULL)return 0;
    node->element = element;
    node->next = head->next;
    head->next = node;
}


_Bool deleteLinkList(Node head ,int index) {
    if (index < 1) return 0;
    while (--index) {
        head = head->next;
        if (head == NULL)return 0;
    }
    if(head->next==NULL)return 0;
    Node temp = head->next;
    head->next = head->next->next;
    free(temp);
}
void printLinkList(Node head){
    while (head->next){
        head = head->next;
        printf("%d ",head->element);
    }
    printf("\n");
}

E * getLinkList(Node head,int index){
    if(index < 1)return 0;
    do {
        head = head->next;
        if(head == NULL)return 0;
    } while (--index);
    return &head->element;
}

int findLinkList(Node head,E element){
    head = head->next;
    int i = 1;
    while (head){
        if(head->element == element)return i;
        head = head->next;
        i++;
    }
    return -1;
}

int sizeLinkLsit(Node head){
    int i = 0;
    while (head->next){
        head = head->next;
        i++;
    }
    return i;
}
