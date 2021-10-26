#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

int sum[50000][2];//用来记录每步的坐标；
int ax,ay,bx,by,k,pd;//ax，ay代表起点，bx，by代表终点，k是步数；
int cx[4]={0,-1,0,1};
int cy[4]={-1,0,1,0};//四个方向，左上右下；
bool temp[17][17];//标记：已经走过的路；
int map[17][17];//地图：1可走，0不可走；
void print()//输出函数；
{
    if(pd==0)//pd：判断是否有解，有解=1，无解=0；
    {
        pd=1;
    }
    for(int h=0;h<=k-1;h++)
    cout<<"("<<sum[h][0]<<","<<sum[h][1]<<")"<<"->"; //输出中途步骤；
    cout<<"("<<bx<<","<<by<<")"<<endl;//输出终点；
}
void walk(int x,int y)//搜索回溯主体；
{
    if(x==bx&&y==by)//到达边界；
    {
        print();//输出解；
        return;
    }
    else
    {
        for(int i=0;i<=3;i++)
        if(map[x+cx[i]][y+cy[i]]==1&&temp[x+cx[i]][y+cy[i]]==0)//判断下一步是否可以走，一方面判断路是否可走，另一方面判断自己是否走过这条路；
        {
            temp[x][y]=1;//走过的路打上标记；
            sum[k][0]=x;
            sum[k][1]=y;//记录当前的坐标
            k++;//步数加1；
            walk(x+cx[i],y+cy[i]);
            temp[x][y]=0;
            k--;
            //回溯，这里的sum可以不用恢复；
        }
    }
}
int main()
{
    int m,n;//矩阵长宽；
    cin>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin>>map[i][j];//输入地图；

    cin>>ax>>ay;//起点；
    cin>>bx>>by;//终点；
    walk(ax,ay);//开始搜索；
    if(pd==0)//判断是否有解，如果没有解，输出-1；
        cout<<"-1";
    return 0;
}