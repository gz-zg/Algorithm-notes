#include <bits/stdc++.h>
using namespace std;

int n,m; 
vector<vector<int>>g;

void solve()
{
    cin>>n>>m;
    g=vector<vector<int>>(n+10)
    for(int i=1;i<=m;i++)
    {
        int a,b; scanf("%d %d",&a,&b);
        g[a].push_back(b);
        g[b].push_back(a);
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}