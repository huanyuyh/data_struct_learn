//
// Created by HUANYU on 2024/3/3.
//
#include <stdio.h>
#include <stdlib.h>
typedef int E;
struct LinkNode{
    E element;
    struct LinkNode * next;
};
typedef struct LinkNode * Node;

void  initList(Node node){
    node->next = NULL;
}

_Bool insertList(Node head ,E element,int index){
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


_Bool deleteList(Node head ,int index) {
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
void printList(Node head){
    while (head->next){
        head = head->next;
        printf("%d ",head->element);
    }
    printf("\n");
}

E * getList(Node head,int index){
    if(index < 1)return 0;
    do {
        head = head->next;
        if(head == NULL)return 0;
    } while (--index);
    return &head->element;
}

int findList(Node head,E element){
    head = head->next;
    int i = 1;
    while (head){
        if(head->element == element)return i;
        head = head->next;
        i++;
    }
    return -1;
}

int sizeLsit(Node head){
    int i = 0;
    while (head->next){
        head = head->next;
        i++;
    }
    return i;
}

int main(){
    struct LinkNode head;
    initList(&head);
    for (int i = 1; i <= 3; ++i) {
        insertList(&head,i*100,i);
    }
//    deleteList(&head,3);
    printf("%d\n" , *getList(&head,3));
    printList(&head);
    printf("%d\n", findList(&head,100));
    printf("%d", sizeLsit(&head));
    return 0;
}