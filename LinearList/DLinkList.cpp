//
// Created by liang on 2021/7/31.
//

#include <cstdlib>

typedef int ElemType;
typedef struct DNode{
    ElemType data;
    struct DNode *prior,*next;
}DNode,*DLinkList;

bool InitDlinkList(DLinkList &L){
    L = (DNode *) malloc(sizeof(DNode));
    if(L==NULL)
        return false;
    L->prior = NULL;
    L->next = NULL;
    //L->next = L;
    //L->prior = L;
    return true;
}
bool InsertNextDNode(DNode *p,DNode *s){
    if(p == NULL || s == NULL)
        return false;
    s->next = p->next;
    if(p->next != NULL)
        p->next->prior=s;
    s->prior=p;
    p->next=s;
    return true;
}
bool InsertDlinkList(){

}
bool DeteleDLinkList(DNode *p){
    if(p==NULL)
        return false;
    DNode *q = p->next;
    if(q==NULL)
        return false;
    p->next = q->next;
    if(q->next!=NULL)
        q->next->prior=p;
    free(q);
    return true;
}
