//
// Created by liang on 2021/7/31.
//

#define MaxSize 10

typedef struct Node {
    int data;
    int next;
    bool flag;
} SlinkList[MaxSize];

void Init(SlinkList s) {
    s->next = -1;
    s->flag = true;
}

void Insert(SlinkList s, int n) {
    Node *p = s;
    while (p->next == -1) {
        p = s + p->next;
    }
    int i = 0;
    for (; i < MaxSize; i++) {
        if ((s + i)->flag == true) {
            (s + i)->data = n;
            (s + i)->flag = false;
            (s + i)->next = -1;
        }
    }
    p->next = i;
}

int main() {

}
