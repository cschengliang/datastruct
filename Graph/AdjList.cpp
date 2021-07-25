#define MAX_VERTEX_NUM 20
typedef int InfoType;
typedef char VertexType[10];
typedef enum {DG,DN,UDG,UDN} GraphKind;
typedef struct ArcNode{
    int adjvex; /*该弧所指向顶点的位置*/
    struct ArcNode *nextarc; /*指向下一条弧的指针*/
    InfoType *info; /*弧的权值*/
}ArcNode;
typedef struct VNode{ /*顶点表节点 */
    VertexType data; /*顶点信息 */
    ArcNode *firstarc; /*指向第一条依附该顶点的弧的指针 */
}VNode,AdjList[MAX_VERTEX_NUM];
typedef struct {
    AdjList vertices; /*邻接表*/
    int vexnum,arcnum; /*图的顶点和边数数*/
    GraphKind kind; /*图的类型*/
}Graph;
