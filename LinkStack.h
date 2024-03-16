//
// Created by HUANYU on 2024/3/16.
//

#ifndef DATA_STRUCT_LEARN_LINKSTACK_H
#define DATA_STRUCT_LEARN_LINKSTACK_H

typedef int E;
struct SLinkNode{
    E element;
    struct SLinkNode * next;
};
typedef struct SLinkNode * SNode;


void initLinkStack(SNode head);
_Bool pushLinkStack(SNode head,E element);
_Bool isLinkEmpty(SNode head);
E popLinkStack(SNode head);
void printLinkStack(SNode head);
#endif //DATA_STRUCT_LEARN_LINKSTACK_H
