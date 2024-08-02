#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,m,s; 
vector<pair<int,int>>g[100010];
bool st[100010];
int dist[100010];

void dij()
{
    priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> >dui;
    memset(dist,0x3f,sizeof dist);
    dist[s]=0;
    dui.push({0,s});
    while(dui.size())
    {
        auto t=dui.top();
        dui.pop();
        int a=t.first,b=t.second;
        if(st[b]==true)continue;
        else
        {
            st[b]=true;
            for(auto i:g[b])
            {
                if(dist[b]+i.second<dist[i.first])
                {
                    dist[i.first]=dist[b]+i.second;
                    dui.push({dist[i.first],i.first});
                }
            }
        }
    }
    for(int i=1;i<=n;i++)cout<<dist[i]<<" ";
}

signed main()
{
    cin>>n>>m>>s;
    while(m--)
    {
        int u,v,w; scanf("%d%d%d",&u,&v,&w);
        g[u].push_back({v,w});
    }
    dij();

    return 0;
}