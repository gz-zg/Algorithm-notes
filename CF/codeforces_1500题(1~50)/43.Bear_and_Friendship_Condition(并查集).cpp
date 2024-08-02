//<并查集>
//或
//<BFS(统计连通块中的点数和边数->(因为每条边都会被统计两遍,所以直接除2就行))> 

#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m;
int f[150010];//f数组用来表示节点之间的父子关系，以及谁是祖宗节点
int d[150010],b[150010];//d[i]和b[i]数组分别表示的是以节点i作为祖宗的集合的点数和边数

int find(int x)//find函数用来寻找节点x的祖宗节点是谁(与f数组搭配使用)
{
    if(x!=f[x])f[x]=find(f[x]);
    return f[x];
}

signed main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)f[i]=i,d[i]=1;

    for(int i=1;i<=m;i++)
    {
        int x,y; scanf("%lld %lld",&x,&y);
        int fx=find(x),fy=find(y);
        if(fx!=fy)
        {
            d[fy]+=d[fx];
            b[fy]+=b[fx]+1;
            f[fx]=fy;
        }
        else b[fy]++;
    }

    bool sign=true;
    for(int i=1;i<=n;i++)
    {
        int fi=find(i);
        if(d[fi]*(d[fi]-1)/2!=b[fi])sign=false;
    }
    
    if(sign==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}