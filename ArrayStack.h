//
// Created by HUANYU on 2024/3/10.
//

#ifndef DATA_STRUCT_LEARN_ARRAYSTACK_H
#define DATA_STRUCT_LEARN_ARRAYSTACK_H
typedef int E;

struct arrStack {
    E * array;
    int capacity;
    int top;   //这里使用top来表示当前的栈顶位置，存的是栈顶元素的下标
};

typedef struct arrStack * ArrayStack;  //起个别名

_Bool initStack(ArrayStack stack);
_Bool pushStack(ArrayStack stack, E element);
void printStack(ArrayStack stack);
_Bool isEmpty(ArrayStack stack);
E popStack(ArrayStack stack);
#endif //DATA_STRUCT_LEARN_ARRAYSTACK_H
