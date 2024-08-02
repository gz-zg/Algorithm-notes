//拓扑序秒了
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>g;

void solve()
{
    int n,m; cin>>n>>m;
    g=vector<vector<int>>(n+1);
    vector<pair<int,int>>b;
    int in[200010]={0};

    for(int i=1;i<=m;i++)
    {
        int t,x,y; scanf("%d %d %d",&t,&x,&y);
        b.push_back({x,y});
        if(t==1)
        {
            g[x].push_back(y);
            in[y]++;
        }
    }

    int idx=0;
    int topu[200010]={0};
    queue<int>q;
    for(int i=1;i<=n;i++)
        if(in[i]==0)
            q.push(i);
    while(q.size())
    {
        int t=q.front();
        q.pop();
        topu[t]=++idx;
        for(int i:g[t])
        {
            in[i]--;
            if(in[i]==0)q.push(i);
        }
    }

    if(idx!=n)cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(auto i:b)
            if(topu[i.first]<topu[i.second])cout<<i.first<<" "<<i.second<<endl;
            else cout<<i.second<<" "<<i.first<<endl;
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}