#include <bits/stdc++.h>
using namespace std;

int gen;
int b[200010],p[200010];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);
        if(b[i]==i)gen=i;
    }
    for(int i=1;i<=n;i++)scanf("%d",&p[i]);
    
    if(p[1]!=gen)cout<<-1<<endl;
    else
    {
        vector<int>dist(n+1,-1);
        dist[gen]=0;
        for(int i=2;i<=n;i++)
        {
            if(dist[b[p[i]]]==-1)  //说明此时父节点的dist值比子节点的dist值大
            {
                cout<<-1<<endl;
                return;
            }
            else dist[p[i]]=dist[p[i-1]]+1;
        }
        for(int i=1;i<=n;i++)cout<<dist[i]-dist[b[i]]<<" ";
        cout<<endl;
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}