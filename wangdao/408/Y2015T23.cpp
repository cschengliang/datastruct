//
// Created by liang on 2021/8/1.
//

#include <cstdlib>

typedef struct Node {
    int data;
    void **next;
} Node, *LinkList;
int Abs(int x){
    if(x<0)
        return -1*x;
    return x;
}
void solution(LinkList &L,int n) {
    int tag[n];
    for(int i=0;i<n;i++){
        tag[i]=0;
    }
    Node *p = L;
    p = p->next;
    while (p != NULL){
        if(tag[Abs(p->data)] == 0)
        {
            tag[Abs(p->data)] = 1;
            p = p->next;
            continue;
        }
        p->data = p->next->data;
        Node * q = p->next;
        p->next = q->next;
        free(q);

    }
}