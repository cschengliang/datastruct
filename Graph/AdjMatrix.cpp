#define INFINITY INT_MAX   /*最大值*/
#define MAX_VERTEX_NUM 100 /*最大顶点个数*/
typedef enum {DG,DN,UDG,UDN} GraphKind; /*有向图，有向网，无向图，无向网*/
typedef int VRType; /*顶点关系的类型，无权图为0，1，加权图，为权值类型*/
typedef char VertexType[20];/*每个顶点的信息*/
typedef struct ArcCell{
    VRType adj;
    struct ArcCell *info;
}ArcCell,AdjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];

typedef struct {
    VertexType vexs[MAX_VERTEX_NUM]; /*记录图的顶点的信息*/
    AdjMatrix arcs;    /*图的邻接矩阵*/
    int vexnum,arcnum; /*记录当前顶点数和弧数*/
    GraphKind kind; /*图的种类标志*/
}MGraph;
