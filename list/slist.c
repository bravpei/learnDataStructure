//
// Created by 40366 on 2019-01-04.
//单向链表
#include<stdio.h>
#include<malloc.h>
#include "../function.h"



List Header(){
    Position temp=malloc(sizeof(struct node));
    temp->next=NULL;
    temp->num=0;
    return temp;
}
//传入头节点，检查是否为空链表
int isEmpty(List L){
    return L->next==NULL;
}
//传入节点，检查是否为最后一个节点
int isLast(List P){
    return P->next==NULL;
}
//查找值为x的节点并返回该节点的指针
Position Find(int x,List L){
    Position P=L->next;
    while(P->next!=NULL&&P->num!=x){
        P=P->next;
    }
    return P;
}
//查找值为x的节点前一个节点并返回该节点的指针
Position FindPrevious(int x,List L){
    if(L->next!=NULL){
        Position temp=L->next;
        while (temp->next!=NULL&&temp->next->num!=x){
            temp=temp->next;
        }
        return temp;
    } else return NULL;
}
//在链表末尾增加节点
void Append(int x,List L){
    Position temp=malloc(sizeof(struct node));
    temp->num=x;
    temp->next=NULL;
    while(L->next!=NULL){
        L=L->next;
    }
    L->next=temp;
}
//把链表置空
void MakeEmpty(List L){
        Position temp,p;
        p=L->next;
        L->next=NULL;
        while(p!=NULL){
            temp=p->next;
            free(temp);
            p=temp;
        }
}
//返回链表的长度，不计算头节点的长度
int Length(List L){
    int n=0;
    while(L->next!=NULL){
        n++;
        L=L->next;
    }
    return n;
}
//打印除了头节点以外链表信息
void PrintList(Position L){
    while(L->next!=NULL){
        L=L->next;
        printf("%4d",L->num);
    }
}