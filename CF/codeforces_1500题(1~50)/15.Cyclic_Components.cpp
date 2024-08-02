//无向图中的dfs
#include <bits/stdc++.h>
using namespace std;

int n,m; 
vector<int>g[200010];
bool st[200010];
int du[200010];

vector<int>t;
void dfs(int u,int pre)
{
    st[u]=true;
    t.push_back(du[u]);
    for(int i:g[u])
        if(i!=pre && st[i]==false)
            dfs(i,u);
}

signed main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x,y; scanf("%d %d",&x,&y);
        g[x].push_back(y),g[y].push_back(x);
        du[x]++; du[y]++; 
    }

    int ans=0;
    for(int i=1;i<=n;i++)
        if(st[i]==false)
        {
            t.clear();
            dfs(i,0);
            bool sign=true;
            for(int k:t)
                if(k!=2)
                    sign=false;
            if(sign)ans++;
        }
    cout<<ans<<endl;

    return 0;
}