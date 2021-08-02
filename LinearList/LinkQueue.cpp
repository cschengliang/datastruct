#include <cstdlib>

//
// Created by liang on 2021/8/2.
//
typedef int ElemType;
typedef struct QNode {
    ElemType data;
    struct QNode *next;
} QNode, *LinkQueue;

bool InitQueue(LinkQueue &Q) {
    QNode *p = (QNode *) malloc(sizeof(QNode));
    if (p == NULL)
        return false;
    p->next = NULL;
    Q = p;
    return true;
}

bool EnQueue(LinkQueue &Q, ElemType e) {
    QNode *p = (QNode *) malloc(sizeof(QNode));
    if (p == NULL)
        return false;
    p->data = e;
    p->next = Q->next;
    Q->next = p;
    return true;
}

bool isEmpty(LinkQueue Q) {
    if (Q->next == NULL)
        return true;
    return false;
}

bool DeQueue(LinkQueue &Q, ElemType &e) {
    if (isEmpty(Q))
        return false;
    QNode *tail = Q;
    while (tail->next->next != NULL) {
        tail = tail->next;
    }
    e = tail->next->data;
    QNode *d = tail->next;
    tail->next = d->next;
    free(d);
    return true;
}

bool DestroyQueue(LinkQueue &Q) {
    QNode *d = Q->next;
    QNode *q = Q->next;
    while (d->next != NULL) {
        d = d->next;
        free(q);
        q = d;
    }
}