#include<iostream>
#include "queue"
using namespace std;

#define MAX_VERTEX_NUM 100

typedef int GraphKind;
typedef int VRType;
typedef int Status;
typedef char VertexType;
typedef int InfoType;

typedef struct ArcCell
{
    VRType adj;
    InfoType *info;
}ArcCell,AdjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];

typedef struct {
    VertexType vexs[MAX_VERTEX_NUM];
    AdjMatrix  arcs;
    int vexnum,arcnum;
    GraphKind kind;                     //0.youxiangtu 1.youxiangwang 2.wuxiangtu 3.wuxiangwang
                                        //0.DG 1.DN 2.UDG 3.UDN
}MGraph;

Status CreateMGraph(MGraph &G);
Status Visit(MGraph &G, int _i);
void PrintfMGraph(MGraph &G);
int LocateVertex(MGraph &G, VertexType v);
int FirstAdjVex(MGraph &G,int v);
int NextAdjVex(MGraph &G,int v,int w);
Status MGraphDFS(MGraph &G);
Status DFS(MGraph &G,int v);
Status MGraphBFS(MGraph &G);