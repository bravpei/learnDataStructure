//
// Created by 40366 on 2019-01-10.
//链表实现的栈
#include <stdio.h>
#include <malloc.h>
#include "../function.h"
//判断栈是否为空
int isEmptyStack(stack s){
    return s->next==NULL;
}
//创建栈
stack createStack(){
    stack s=malloc(sizeof(struct linkedstacknode));
    if(s==NULL){
        printf("Out of space!");
        return NULL;
    }else{
        s->next=NULL;
        return s;
    }

}
//置空栈
void makeEmpty(stack s){
    stack p=NULL;
    while(s->next!=NULL){
        p=s->next;
        s->next=s->next->next;
        free(p);
    }
}
//入栈
void pushStack(int x,stack s){
    stack p=malloc(sizeof(struct linkedstacknode));
    if(p==NULL){
        printf("Out of space!");
    }else{
        p->num=x;
        p->next=s->next;
        s->next=p;
    }
}
//获取元素
int topStack(stack s){
    if(!isEmptyStack(s))
        return s->next->num;
    else printf("Empty stack");
    return  0;
}
//出栈
void popStack(stack s){
    if(!isEmptyStack(s)){
        stack p=s->next;
        s->next=s->next->next;
        free(p);
    }else printf("Empty stack");
}
//计算栈的长度
int lengthOfStack(stack s){
    stack p=s->next;
    int n=0;
    while(p!=NULL){
        p=p->next;
        n++;
    }
    return n;
}