//
// Created by liang on 2021/7/30.
//
/*线性表的顺序实现和链式实现 */

//#include "LinearList.h"
#include <iostream>

typedef int ElemType;

#define InitSize 10

typedef struct {
    ElemType *data;  //存储数组的内存由由内存分配语句分配
    int maxsize, length;
} SeqList;

void InitList(SeqList &s) {
    s.data = (ElemType *) malloc(sizeof(ElemType) * InitSize);//每次分配的空间数
    //s.data = new ElemType [InitSize];
    s.length = 0;
    s.maxsize = InitSize;
}

void IncreaseSize(SeqList &s, int len) {
    ElemType *p = s.data;
    s.data = (ElemType *) malloc((s.maxsize + len) * sizeof(ElemType));
    for (int i = 0; i < s.length; i++) {
        s.data[i] = p[i];
    }
    s.maxsize = s.maxsize + len;
    free(p);
}

ElemType GetElem(SeqList s, int i) {
    return s.data[i - 1];
}

void Print(SeqList s) {
    int i = 0;
    for (; i < s.length; i++) {
        std::cout << GetElem(s, i) << " ";
    }
}

int main() {


}