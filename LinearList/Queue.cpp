//
// Created by liang on 2021/8/1.
//
#define Maxsize 100
typedef int ElemType;
typedef struct Queue {
    ElemType data[Maxsize];
    int front;
    int rear;
} SeQueue;

void InitQueue(SeQueue &Q) {
    Q.front = 0;
    Q.rear = 0;
}

void DestoryQueue(SeQueue &Q) {
    Q.front = Q.rear;
}

bool isFull(SeQueue Q) {
    if ((Q.rear + 1) % Maxsize == Q.front)
        return true;
    return false;
}

bool isEmpty(SeQueue Q) {
    if (Q.front == Q.rear)
        return true;
    return false;

}

bool EnQueue(SeQueue &Q, ElemType e) {
    if (isFull(Q))
        return false;
    Q.data[Q.rear] = e;
    Q.rear = (Q.rear + 1) % Maxsize;
    return true;
}

bool DeQueue(SeQueue &Q, ElemType &e) {
    if (isEmpty(Q))
        return false;
    e = Q.data[Q.front];
    Q.front = (Q.front + 1) % Maxsize;
    return true;
}

bool GetElem(SeQueue Q, ElemType &e) {
    if (isEmpty(Q))
        return false;
    e = Q.data[Q.front];
    return true;
}
