//
// Created by HUANYU on 2024/3/10.
//

#ifndef DATA_STRUCT_LEARN_BOTHLINKLIST_H
#define DATA_STRUCT_LEARN_BOTHLINKLIST_H
typedef int E;

struct BothListNode{
    E element;
    struct BothListNode * next;
    struct BothListNode * prev;
};

typedef struct BothListNode * BthNode;

void initBthList(BthNode head);
_Bool insertBthList(BthNode head,E element,int index);
_Bool deleteBthList(BthNode head,int index);
#endif //DATA_STRUCT_LEARN_BOTHLINKLIST_H
