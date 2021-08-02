//
// Created by liang on 2021/8/1.
//
#include <iostream>
#define MaxSize 10
typedef int ElemType;
typedef struct {
    ElemType data[MaxSize];
    int head;
    int tail;
    int length;
}Queue;

void Init(Queue &q){
    q.length=0;
    q.head = 0;
    q.tail = MaxSize - 1;
    q.length = 0;
}
bool isEmpty(Queue q){
    if(q.length == 0)
        return true;
    return false;
}
bool isFull(Queue q){
    if(q.length == MaxSize)
        return true;
    return false;
}
bool EnQueue(Queue &q,ElemType e){
    if(isFull(q))
        return false;
    q.tail++;
    q.tail = q.tail % MaxSize;
    q.data[q.tail] = e;
    q.length++;
    return true;
}
bool DeQueue(Queue &q,ElemType &e){
    if(isEmpty(q))
        return false;
    e = q.data[q.head];
    q.head++;
    q.head = q.head % MaxSize;
    q.length--;
    return true;

}
void test(){
    Queue Q;
    Init(Q);
    for(ElemType i=0;i<MaxSize;i++){
        if(!EnQueue(Q,i))
            break;
    }
    ElemType e;
    for(ElemType i=0;i<MaxSize;i++){
        if(!DeQueue(Q,e))
            break;
        std::cout<<e<<" ";
    }
}
int main() {
    test();
}
