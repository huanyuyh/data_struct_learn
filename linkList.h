//
// Created by HUANYU on 2024/3/10.
//

#ifndef DATA_STRUCT_LEARN_LINKLIST_H
#define DATA_STRUCT_LEARN_LINKLIST_H

typedef int E;
struct LinkNode{
    E element;
    struct LinkNode * next;
};
typedef struct LinkNode * Node;


void  initLinkList(Node node);
_Bool insertLinkList(Node head ,E element,int index);
_Bool deleteLinkList(Node head ,int index);
void printLinkList(Node head);
E * getLinkList(Node head,int index);
int findLinkList(Node head,E element);
int sizeLinkLsit(Node head);
#endif //DATA_STRUCT_LEARN_LINKLIST_H
