//
// Created by liang on 2021/8/1.
//

#include <cstdlib>

typedef struct Node {
    int data;
    void **next;
} Node, *LinkList;

int length(LinkList s) {
    int i = 0;
    Node *p = s;
    while (p->next != NULL) {
        p = p->next;
        i++;
    }
    return i;
}

LinkList solution(LinkList s1, LinkList s2) {
    int m = length(s1);
    int n = length(s2);
    Node *p = s1;
    Node *q = s2;
    if (m >= n) {
        int l = m - n;
        for (int i = 0; i < l; i++) {
            p= p->next;
        }
        while (p != q){
            p = p->next;
            q = q->next;
        }
    }
    return q;

}