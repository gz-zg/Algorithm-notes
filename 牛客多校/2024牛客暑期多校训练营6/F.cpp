#include <bits/stdc++.h>
#define int long long
#define x first
#define y second
using namespace std;

int n,m;
vector<bool>st;
vector<vector<int>>g;
vector<int>ji,ou,high;

void dfs(int u,int pre,int h)
{
    if(h>hign)high=h;
    st[u]=true;
    if(h%2==0)ou.push_back(u);
    else ji.push_back(u);
    for(int i:g[u])
        if(i!=pre)
            dfs(i,u,h+1);
}

void solve()
{
    cin>>n>>m;
    st=vector<bool>(n+10,false);
    g=vector<vector<int>>(n+10);
    for(int i=1;i<=m;i++)
    {
        int a,b; cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int ntree=0;
    vector<pair<int,int>>treehign;
    ji.clear(),ou.clear();
    for(int i=1;i<=n;i++)
        if(st[i]==false)
        {
            high=1;
            dfs(i,0,1);
            ntree++;
            treehign.push_back({i,high});
        }
    if(ntree>=2)
    {
        stack<int>ans1,ans2;
        bool all1=true;
        for(int i=0;i<treehign.size();i++)
            if(treehign[i].y!=1)
            {
                all1=false;
                ans2.push(treehign[i].x);
            }
            else ans1.push(treehign[i].x);
        if(all1)
        {
            for(int i=1;i<=n;i++)cout<<i<<" ";
            return;
        }
        else
        {
            int x=ans2.top(),ans2.pop();
            int y;
            if(ans2.size()>=1)
            {
                y=ans2.top();
                //x为奇
                for(int i:ji)
                    if(i!=x)
            }
            else y=ans1.top();

        }
    }
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}