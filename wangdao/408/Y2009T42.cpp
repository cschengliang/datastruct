//
// Created by liang on 2021/8/1.
//
//解题思路，为单链表创建两个指针p,q,让p指针遍历k次后，让p,q一起先后遍历，当p指针到单链表最后一个节点时，q节点即为所需要的点

#include <cstdlib>

typedef struct Node {
    int data;
    void **next;
} Node, *LinkList;

int solution(LinkList list, int K) {
    Node *p = list;
    Node *q = list;
    int i = 0;
    for (; i < K; i++) {
        if (p->next == NULL)
            break;
        p = p->next;
    }
    if (i != K-1)
        return 1;
    i = 0;
    while (p->next == NULL) {
        p = p->next;
        q = q->next;
    }
    return q->data;
}