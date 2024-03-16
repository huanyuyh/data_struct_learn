//
// Created by HUANYU on 2024/3/3.
//
#include <stdio.h>
#include <stdlib.h>
#include "LinkStack.h"


int main(){
    struct SLinkNode head;
    initLinkStack(&head);
    for (int i = 0; i < 3; ++i) {
        pushLinkStack(&head,i*100);
    }
    printLinkStack(&head);
    while (!isLinkEmpty(&head)){
        printf("%d ", popLinkStack(&head));
    }
}
