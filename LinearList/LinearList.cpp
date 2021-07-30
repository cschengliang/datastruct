//
// Created by liang on 2021/7/30.
//
/*线性表的顺序实现和链式实现 */

//#include "LinearList.h"
#define MaxSize 50
typedef int ElemType;

//线性表的静态顺序实现
typrdef struct{
    ElemType data[MaxSize];
    int length;
}SqList1;

#define InitSize 100
typedef struct{
    ElemType *data;  //存储数组的内存由由内存分配语句分配
    int MaxSize,length;
}SqList2;

ElemType GetElem(SqList1 s,int i){
    return s.data[i-1];
}
void Print(Sqlist1 s){
    int i=0;
    for(;i<){

    }
}

int main(){


}