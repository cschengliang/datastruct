//
// Created by liang on 2021/7/30.
//
#include "iostream"

typedef int ElemType;
struct LNode{
    ElemType data;
    struct LNode *next;
};
//LNode* 与 LinkList
typedef struct LNode LNode;
typedef struct LNode *LinkList;
/*不带头节点的初始化
bool InitList(LinkList &L){
    L = NULL;
    return true;
}
*/
//带头节点的单链表
//头节点不存储数据
bool InitList(LinkList &L){
    L= (LNode*) malloc(sizeof(LNode));
    if(L == NULL){
        return false;
    }
    L->next = NULL;
    return true;
}


int main(){
    LinkList L;
    InitList(L);
}