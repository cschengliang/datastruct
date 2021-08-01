//
// Created by liang on 2021/8/1.
//

#define MaxSize 10

typedef int ElemType;
typedef struct stack {
    ElemType data[MaxSize];
    int top;//栈顶指针，空栈为-1，满栈为MaxSize-1
} SqStack;

//初始化
void InitStack(SqStack &s) {
    s.top = -1;
}

//进栈
bool Push(SqStack &s, ElemType e) {
    if (s.top == MaxSize - 1)
        return false;
    s.top++;
    s.data[s.top] = e;
    return true;
}

bool Pop(SqStack &s, ElemType &e) {
    if (s.top == -1)
        return false;
    s.data[s.top];
    s.top--;
}

bool GetElem(SqStack &s, ElemType &e) {
    if (s.top == -1)
        return false;
    s.data[s.top];
}

bool isEmpty(SqStack s) {
    if (s.top == -1)
        return true;
    return false;
}

bool isFull(SqStack s) {
    if (s.top == MaxSize - 1)
        return true;
    return false;
}

//共享栈
typedef struct {
    ElemType data[MaxSize];
    int top0;
    int top1;
}ShStack;
bool isEmptySh(ShStack s){
    if(s.top0 == -1 && s.top1 == 10)
        return true;
    return false;
}
bool isFullSh(ShStack s){
    if(s.top1-s.top0 == 1)
        return true;
    return false;
}