#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;

int n,m,k;
vector<PII>g[1010];
int all[1010][1010];

void diji(int x)
{
    int dist[1010]; bool st[1010];
    memset(dist,0x3f,sizeof dist);
    dist[x]=0;
    memset(st,false,sizeof st);
    priority_queue<PII,vector<PII>,greater<PII>>dui;
    dui.push({0,x});
    while(dui.size())
    {
        PII t=dui.top(); dui.pop();
        int A=t.first; int B=t.second;
        if(st[B]==true)continue;
        st[B]=true;
        for(auto i:g[B])
        {
            int j=i.first;
            if(dist[j]>A+i.second)
            {
                dist[j]=min(dist[j],A+i.second);
                dui.push({dist[j],j});
            }
        }
    }
    for(int i=1;i<=n;i++)all[x][i]=dist[i];
}

signed main()
{
    cin>>n>>m>>k;
    vector<PII>edge;
    for(int i=1;i<=m;i++)
    {
        int x,y,w; scanf("%d %d %d",&x,&y,&w);
        g[x].push_back({y,w});
        g[y].push_back({x,w});
        edge.push_back({x,y});
    }

    for(int i=1;i<=n;i++)diji(i);

    vector<PII>peo;
    while(k--)
    {
        int a,b; scanf("%d %d",&a,&b);
        peo.push_back({a,b});
    }

    int ans=1e9;
    for(auto i:edge)
    {
        int a=i.first, b=i.second;
        int res=0;
        for(auto j:peo)
        {
            int x=j.first, y=j.second;
            res+=min(all[x][y],min(all[x][a]+all[y][b],all[x][b]+all[y][a]));
        }
        ans=min(ans,res);
    }
    cout<<ans<<endl;

    return 0;
}