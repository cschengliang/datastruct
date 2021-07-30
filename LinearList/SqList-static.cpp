//
// Created by liang on 2021/7/30.
//
/*线性表的顺序实现和链式实现 */

//#include "LinearList.h"
#include <iostream>

#define MaxSize 50
typedef int ElemType;

//线性表的静态顺序实现
typedef struct{
    ElemType data[MaxSize];
    int length;
}SqList1;

#define InitSize 100
typedef struct{
    ElemType *data;  //存储数组的内存由由内存分配语句分配
    int maxsize,length;
}SqList2;

ElemType GetElem(SqList1 s,int i){
    return s.data[i-1];
}
void Print(SqList1 s){
    int i=0;
    for(;i<s.length;i++){
        std::cout<<GetElem(s,i)<<" ";
    }
}

int main(){
    SqList1 s ;
    s.data[0] = 1;
    s.data[1] = 2;
    s.length = 2;
    Print(s);


}