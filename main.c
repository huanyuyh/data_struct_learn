//
// Created by HUANYU on 2024/3/3.
//
#include <stdio.h>
#include <stdlib.h>

typedef int E;

struct BothListNode{
    E element;
    struct ListNode * next;
    struct ListNode * prve;
};