//思路:在传送信息时把信息全部暂时累加到该点所在连通块中的祖宗节点上（即val数组里面）
//当连接时，才将val数组中存储的各个祖宗节点累加的信息加到各个节点的总信息里面（即ans里面），然后再将val数组清空
#include<bits/stdc++.h>

using namespace std;

int n,m;
int p[10010];
int val[10010],ans[10010];

int find(int x)
{
    if(x!=p[x])p[x]=find(p[x]);
    return p[x];
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)p[i]=i;

    while(m--)
    {
        int op,a,b; scanf("%d%d%d",&op,&a,&b);
        if(op==1)
        {
            a=find(a),b=find(b);
            if(a==b)continue;
            else
            {
                for(int i=1;i<=n;i++)ans[i]+=val[find(i)];
                for(int i=1;i<=n;i++)val[i]=0;
                p[a]=b;
            }
        }
        else
        {
            a=find(a);
            val[a]+=b;
        }
    }
    for(int i=1;i<=n;i++)ans[i]+=val[find(i)];
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";

    return 0;
}