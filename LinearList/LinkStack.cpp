//
// Created by liang on 2021/8/1.
//
//链栈
typedef int ElemType;
typedef struct LinkNode{
    ElemType data;
    struct LinkNode *next;
}LinkStack0,LinkStack1;
//用带头节点和不带头节点的方式
//基本操作 创/增/删/查/判空/判满
bool Init0();
bool Init1();

bool Push0();
bool Push1();

bool Pop0();
bool Pop1();

bool GetElem0();
bool GetElem1();

bool isEmpty0();
bool isEmpty1();

bool isFull0();
bool isFull1();