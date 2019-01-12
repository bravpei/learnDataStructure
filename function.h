//
// Created by 40366 on 2019-01-05.
//

#ifndef LEARNDATASTRUCTURE_FUNCTION_H
#define LEARNDATASTRUCTURE_FUNCTION_H

#endif //LEARNDATASTRUCTURE_FUNCTION_H
//slist.c单向链表
struct node{
    int num;
    struct node *next;
};
typedef struct node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
List Header();
int isEmpty(List L);
int isLast(List P);
Position Find(int x,List L);
Position FindPrevious(int x,List L);
void Append(int x,List L);
void MakeEmpty(List L);
int Length(List L);
void PrintList(Position L);
//linkedstack链表实现的栈
struct linkedstacknode {
    int num;
    struct linkedstacknode *next;
};
typedef struct linkedstacknode *stack;
int isEmptyStack(stack s);
stack createStack();
void makeEmpty(stack s);
void pushStack(int x,stack s);
int topStack(stack s);
void popStack(stack s);
int lengthOfStack(stack s);
//arraystack数组实现的栈
struct stackarray{
    int capacity;
    int TopOfStack;
    int *array;
};
typedef struct stackarray *stackArray;
stackArray createStackArray(int l);
int isEmptyStackArray(stackArray s);
int isFullStackArray(stackArray s);
void pushStackArray(int x,stackArray s);
void freeStackArray(stackArray s);
int lengthStackArray(stackArray s);
int topStackArray(stackArray s);
void popStackArray(stackArray s);
