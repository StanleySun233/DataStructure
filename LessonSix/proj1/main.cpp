#include "df.h"

int main()
{
    MGraph G;
    CreateMGraph(G);
    PrintfMGraph(G);

    FirstAdjVex(G,0);

    NextAdjVex(G,1,1);
    NextAdjVex(G,3,3);

    MGraphDFS(G);
    MGraphBFS(G);
    return 0;
}

/* case 0

5 7 0
ABCDE
0 1
0 4
1 2
2 3
3 0
3 1
4 2
*/

/* case 1

6 7 2
ABCDEF
0 1
0 4
1 4
1 5
2 3
2 5
3 5
*/