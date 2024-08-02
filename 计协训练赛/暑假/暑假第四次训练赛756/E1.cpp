#include <bits/stdc++.h>
using namespace std;

int n,k;
int x[200010];
int dist[200010];
int h[200010];
vector<vector<int>>g;

void dfs(int u,int pre)
{
    h[u]=h[pre]+1;
    for(int i:g[u])
        if(i!=pre)
            dfs(i,u);
}

void bfs()
{
    h[0]=-1;
    dfs(1,0);
    for(int i=1;i<=n;i++)dist[i]=-1;

    queue<int>q;
    for(int i=1;i<=k;i++)dist[x[i]]=0,q.push(x[i]);
    while(q.size())
    {
        int t=q.front();
        q.pop();
        for(int i:g[t])
            if(dist[i]==-1)
            {
                dist[i]=dist[t]+1;
                q.push(i);
            }
    }
    int sign=0;
    for(int i=1;i<=n;i++)
        if(i!=1 && g[i].size()==1)
            if(h[i]<dist[i])
                sign=1;
    if(sign)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

void solve()
{
    cin>>n>>k;
    for(int i=1;i<=k;i++)scanf("%d",&x[i]);
    g=vector<vector<int>>(n+1);
    for(int i=1;i<=n-1;i++)
    {
        int a,b; scanf("%d %d",&a,&b);
        g[a].push_back(b);
        g[b].push_back(a);
    }
    bfs();
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}