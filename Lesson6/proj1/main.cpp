#include "graph.h"

int main()
{
    MGraph G;
    CreateMGraph(G);
    PrintfMGraph(G);

    FirstAdjVex(G,0);

    NextAdjVex(G,1,1);
    NextAdjVex(G,3,3);

    MGraphDFS(G);
    MGraphBFS(G); //BFS has some problems which should be fixed.
    return 0;
}
