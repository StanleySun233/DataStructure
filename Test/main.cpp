#include<iostream>
using namespace std;

#define MAX_VERTEX_NUM 20

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
    GraphKind kind;                     //0 youxiangtu 1 youxiangwang 2 wuxiangtu 3 wuxiangwang
}MGraph;


void CreateMGraph(MGraph &G)
{
    cout<<"press the vexnum, arcnum and GraphKind."<<endl;
    cin >> G.vexnum;
    cin >> G.arcnum;
    cin >> G.kind;
    for(int i = 0; i < G.vexnum; i++)
        cin >> G.vexs[i];
    for(int i = 0; i < G.vexnum; i++)
        for(int j = 0; j < G.vexnum; j++)
            G.arcs[i][j].adj = INFINITY;
    switch (G.kind)
    {
        case 0:
            for(int k = 0; k < G.arcnum; k++)
            {
                int i, j, w;
                cin >> i >> j;
                cin >> w;
                G.arcs[i][j].adj = w;
            }break;
        case 1:
            for(int k = 0; k < G.arcnum; k++)
            {
                int i, j, w;
                cin >> i >> j;
                cin >> w;
                G.arcs[i][j].adj = w;
            }break;
        case 2:
            for(int k = 0; k < G.arcnum; k++)
            {
                int i, j, w;
                cin >> i >> j;
                cin >> w;
                G.arcs[i][j].adj = w;
                G.arcs[j][i].adj = G.arcs[i][j].adj;
            }break;
        case 3:
            for(int k = 0; k < G.arcnum; k++)
            {
                int i, j, w;
                cin >> i >> j;
                cin >> w;
                G.arcs[i][j].adj = w;
                G.arcs[j][i].adj = G.arcs[i][j].adj;
            }break;

    }

}

void PrintfMGraph(MGraph G)
{
    for(int i = 0; i < G.vexnum; i++)
    {
        for(int j = 0; j < G.vexnum; j++)
            cout << G.arcs[i][j].adj << '\t';
        cout << endl;
    }
}

int main()
{
    MGraph G;
    CreateMGraph(G);
    PrintfMGraph(G);
    return 0;
}

/*
6 7 2
ABCDEF
0 1 1
0 5 1
1 5 1
1 6 1
2 3 1
2 6 1
3 6 1
*/