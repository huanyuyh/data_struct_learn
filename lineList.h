//
// Created by HUANYU on 2024/3/10.
//

#ifndef DATA_STRUCT_LEARN_LINELIST_H
#define DATA_STRUCT_LEARN_LINELIST_H

typedef int E;

struct List {
    E * array;
    int capacity;
    int size;
};

typedef struct List * ArrayList;

_Bool initList(ArrayList list);
_Bool insertList(ArrayList list, E element, int index);
_Bool deleteList(ArrayList list, int index);
int sizeList(ArrayList list);
E * getList(ArrayList list, int index);
int findList(ArrayList list, E element);

#endif //DATA_STRUCT_LEARN_LINELIST_H
