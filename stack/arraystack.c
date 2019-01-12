//
// Created by 40366 on 2019-01-10.
//数组实现的栈
#include <stdio.h>
#include <malloc.h>
#include "../function.h"

#define MINStackSize 5
#define EmptyTOS -1
//创建数组实现的栈
stackArray createStackArray(int l){
    stackArray s=NULL;
    if(l<MINStackSize)
        printf("Stack size is too small!");
    else{
        s=malloc(sizeof(struct stackarray));
        if(s==NULL)
            printf("Out of space!");
        else {
            s->capacity=l;
            s->TopOfStack=EmptyTOS;
            s->array=malloc(sizeof(struct stackarray)*l);
        }
    }
    return s;
}
//判断栈是否为空
int isEmptyStackArray(stackArray s){
    return s->TopOfStack==EmptyTOS;
}
//判断栈是否已满
int isFullStackArray(stackArray s){
    return s->TopOfStack==s->capacity;
}
//入栈
void pushStackArray(int x,stackArray s){
    if(s->TopOfStack<s->capacity){
        s->array[++s->TopOfStack]=x;
    }else printf("The stack is full!");
}
//销毁栈
void freeStackArray(stackArray s){
    free(s->array);
    free(s);
}
//得到栈当前长度
int lengthStackArray(stackArray s){
    return ++s->TopOfStack;
}
//返回栈顶元素
int topStackArray(stackArray s){
    if(!isEmptyStackArray(s)) return s->array[s->TopOfStack];
    else printf("The stack is empty!");
}
//出栈
void popStackArray(stackArray s){
    s->TopOfStack--;
}
