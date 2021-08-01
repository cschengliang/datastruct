//
// Created by liang on 2021/7/30.
//
#include "iostream"

typedef int ElemType;
struct LNode {
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
bool InitList(LinkList &L) {
    L = (LNode *) malloc(sizeof(LNode));
    if (L == NULL) {
        return false;
    }
    L->next = NULL;
    //L->next = L;
    return true;
}

bool Insert(LinkList &L, ElemType e, int i) {
    if (i < 1)
        return false;
    LNode *p = L;
    int j = 0;
    //找到第i个节点前面一个节点的位置
    //
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    }
    //如果第i-1个节点为NULL，则退出
    if (p == NULL)
        return false;
    LNode *s = (LNode *) malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}

bool InsertNextNode(LNode *p, ElemType e) {
    if (p == NULL)
        return false;

    LNode *q = (LNode *) malloc(sizeof(LNode));
    if (q == NULL)
        return false;
    q->data = e;
    q->next = p->next;
    p->next = q;
    return true;

}

bool InsertPriorNode(LNode *p, ElemType e) {
    if (p == NULL)
        return false;
    LNode *q = (LNode *) malloc(sizeof(LNode));
    if (q == NULL)
        return false;
    q->data = p->data;
    p->data = e;

    q->next = p->next;
    p->next = p;
    return true;
}

bool Delete(LinkList &L, ElemType &e, int i) {
    if (i < 1)
        return false;
    LNode *p = (LNode *) malloc(sizeof(LNode));
    int j = 0;
    while (p == NULL && j < i - 1) {
        p = p->next;
        j++;
    }
    if (p == NULL)
        return false;
    e = p->next->data;
    LNode *q = p->next;
    p->next = p->next->next;
    free(q);
    return true;
}

bool DeleteNode(LNode *p) {
    if (p == NULL)
        return false;
    if (p->next == NULL)
        return false;
    LNode *q = p->next;
    p->data = p->next->data;
    p->next = q->next;
    free(q);
    return true;
}

//按位查找
LNode *GetElem(LinkList L, int i) {
    if (i < 0)
        return NULL;
    LNode *p = L;
    int j = 0;
    while (p != NULL && j < i) {
        p = p->next;
        j++;
    }
    return p;
}
LNode * LocateElem(LinkList L,ElemType e){
    LNode *p = L->next;
    while (p != NULL && p->data != e)
        p = p->next;
    return p;
}
int Length(LinkList L){
    int len =0;
    LNode *p = L;
    while (p->next != NULL){
        p = p->next;
        len++;
    }
    return len;
}
//单链表的建立
//带头节点的单链表的尾插法,
//在第i个位置插入元素e
bool ListInsert(LinkList &L,int i, ElemType e){
    if(i<1)
        return false;
    LNode *p = L;
    int j=0;
    while ((p!= NULL && j<i-1)){
        p = p->next;
        j++;
    }
    if(p == NULL)
        return false;
    LNode * q = (LNode*) malloc(sizeof(LNode));
    q->data = e;
    q->next = p->next;
    p->next = q;
    return true;

}
LinkList List_TailInsert(LinkList &L){
    int x;
    L= (LinkList) malloc(sizeof(LNode));
    LNode *s , *r = L;
    std::cin>>x;
    while (x != 9999){
        s = (LNode*) malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        std::cin>>x;
    }
    r->next = NULL;
    return L;
}
//链表的逆置
LinkList List_HeadInsert(LinkList &L){
    LNode *s;
    int x;
    L = (LinkList) malloc(sizeof(LNode));
    L->next=NULL;
    std::cin>>x;
    while (x!=9999){
        s=(LNode*) malloc(sizeof(LNode));
        s->data=x;
        s->next = L->next;
        L->next = s;
        std::cin>>x;
    }
    return L;
}
LinkList Transform(LinkList L){
    if(L == NULL)
        return NULL;
    LNode *p = L;
    LNode *q = (LNode*) malloc(sizeof(LNode));
    LNode *t;
    while (p != NULL  ){
        t = (LNode*) malloc(sizeof(LNode));
        t->data = p->data;
        t->next = q->next;
        q->next = t;
        p = p->next;
    }
    return q;
}

int main() {

}