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

int Loaction(SeqList L, ElemType e) {

}

//在第i个位置插入e
bool Insert(SeqList &s, ElemType e, int i) {
    //把第i个位置开始后面的数依次往后移动
    if(i<0 || i>s.length){
        return false;
    }
    if(s.length >= s.maxsize){
        return false;
    }
    for (int j = s.length; j >= i ; j--) {
        s.data[j-1] = s.data[j];
    }
    s.data[i-1] = e;
    s.length++;
    return true;
}

//删除第i个位置，把删除数据放入e中
void Delete(SeqList &s, ElemType &e, int i) {

}

void Print(SeqList s) {
    int i = 0;
    for (; i < s.length; i++) {
        std::cout << GetElem(s, i) << " ";
    }
}

int main() {


}