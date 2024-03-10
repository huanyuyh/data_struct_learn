//
// Created by HUANYU on 2024/3/3.
//
#include <stdio.h>
#include <stdlib.h>
#include "ArrayStack.h"

int main(){
    struct arrStack stack;
    initStack(&stack);
    for (int i = 0; i < 3; ++i) {
        pushStack(&stack, i*100);
    }
    printStack(&stack);
    while (!isEmpty(&stack)) {
        printf("%d ", popStack(&stack));   //将栈中所有元素依次出栈
    }
}
