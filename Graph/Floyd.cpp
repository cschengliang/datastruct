//
// Created by liang on 2021/7/28.
//弗洛伊德算法，用来求图中各个节点之间的最短路径长度

#include "Floyd.h"
/*准备图的邻接矩阵和一个path数组*/
int A[3][3];
int path[3][3];
int n = 3; /*n为图的节点个数 */
for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(A[i][j]>A[i][k]+A[k][j]){
                A[i][j]=A[i][k]+A[k][j];
                path[i][j]=k
            }
        }
    }
}