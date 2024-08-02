#include <bits/stdc++.h>
using namespace std;

int n,m;
int st[100010];
vector<int>g[100010];
int ans=0;

//num为当前连续的猫的个数
void dfs(int u,int pre,int num)  //每条边都为“无向边”的有根树，在遍历时需要记录<当前节点u>和<父节点pre>
{
    if(num>m)return;  //剪枝
    if(g[u].size()==1 && u!=1)
    {
        ans++;
        return;  //触底回溯
    }

    for(int i:g[u])
        if(i!=pre)
            if(st[i]==1)dfs(i,u,num+1);
            else dfs(i,u,0);
}

signed main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)scanf("%d",&st[i]);
    for(int i=1;i<=n-1;i++)
    {
        int a,b; scanf("%d%d",&a,&b);
        g[a].push_back(b);  //因为题目没有告诉每条边中的两个点之间的父子关系
        g[b].push_back(a);  //所以要存的是无向边
    }

    if(st[1]==1)dfs(1,0,1);
    else dfs(1,0,0);
    cout<<ans<<endl;

    return 0;
}