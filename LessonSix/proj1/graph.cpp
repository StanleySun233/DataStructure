#include "graph.h"

Status CreateMGraph(MGraph &G)
{
    cout<<"press the Vexnum, Arcnum and index of GraphKind(0.DG 1.DN 2.UDG 3.UDN)."<<endl; //DG,DN,UDG,UDN
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
                int i, j;
                cin >> i >> j;
                G.arcs[i][j].adj = 1;
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
                int i, j;
                cin >> i >> j;
                G.arcs[i][j].adj = 1;
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
    return 1;
}//If input DG &UDG, it should not input the value of two vertex, or you need to input the value.

Status Visit(MGraph &G, int _i)
{
    if (_i >=G.vexnum)
        return 0;
    cout<<G.vexs[_i];
    return 1;
}//Print vertex through index.

void PrintfMGraph(MGraph &G)
{
    cout<<"\t";
    for (int i = 0;i<G.vexnum;i++)
        cout<<G.vexs[i]<<"\t";
    cout<<endl;
    for(int i = 0; i < G.vexnum; i++)
    {
        cout<<G.vexs[i]<<"\t";
        for(int j = 0; j < G.vexnum; j++)
            if (G.kind == 1 || G.kind == 3)
                cout << G.arcs[i][j].adj << '\t';
            else
                cout << (G.arcs[i][j].adj == 1) << '\t';
        cout << endl;
    }
}//show the arcs of MGraph.

int LocateVertex(MGraph &G, VertexType v)
{
    int p = -1, q = -1;
    for (int i = 0;i<G.vexnum;i++)
        if (v == G.vexs[i])
            p = i;
    return p;
}//If return -1, means there is no vertex fits.

int FirstAdjVex(MGraph &G,int v)
{
    int q = -1;
    for (int i = 0;i<G.vexnum;i++)
        if (G.arcs[v][i].adj)
        {
            q = i;
            break;
        }
    if (!(q+1))
        return -1;
//    cout << G.vexs[v] << " -> " << G.vexs[q] << endl;
    return q;
}//If return -1 and not print, means that there is no vertex fits.

int NextAdjVex(MGraph &G,int v,int w)
{
    int q = -1;
    for (int i = w + 1 ; i < G.vexnum ; i++)
        if (G.arcs[v][i].adj)
        {
            q = i;
            break;
        }
    if (!(q+1))
        return -1;
//    cout << G.vexs[v] << " -> " << G.vexs[q] << endl;
    return q;
}//If return -1 and no print, means that there is no vertex fits.

int value[MAX_VERTEX_NUM];
Status MGraphDFS(MGraph &G)
{
    if(!G.vexnum * G.arcnum)
        return 0;
    memset(value,0,sizeof(value[0]) * MAX_VERTEX_NUM);
    cout<<"DFS result is: ";
    for (int i = 0;i<G.vexnum;++i)
        if(!value[i])
            DFS(G,i);
    cout<<endl;
    return 1;
}//Use DFS to visit all the vertex.

Status DFS(MGraph &G,int v)
{
    value[v] = 1;
    Visit(G,v);
    for(int i = FirstAdjVex(G, v); i>=0 ; i = NextAdjVex(G,v,i))
        if(!value[i])
            DFS(G,i);
    return 1;
}//SubFunction of MGraphDFS.

Status MGraphBFS(MGraph &G)
{
    if(!G.vexnum * G.arcnum)
        return 0;
    memset(value,0,sizeof(value[0]) * MAX_VERTEX_NUM);
    cout<<"BFS result is: ";
    queue<int> q;
    for(int v = 0; v < G.vexnum; ++v)
        if (!value[v])
        {
            value[v] = 1;
            Visit(G, v);
            q.push(v);
            while(q.empty())
            {
                int u = q.front();
                q.pop();
                for(int w = FirstAdjVex(G, u); w >= 0; w = NextAdjVex(G, u, w))
                {
                    if(!value[w])
                    {
                        value[w] = 1;
                        Visit(G, w);
                        w = q.front();
                        q.pop();
                    }
                }
            }
        }
    return 1;
}//Use BFS to visit all the vertex.
