#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,s;
int sum;
vector<int>edge;
vector<vector<pair<int,int>>>g;

bool check(int x)
{
    int cnt=0,he=sum;
    priority_queue<int>dui;
    for(int i:edge)dui.push(i);
    while(dui.size())
    {
        int t=dui.top(); dui.pop();
        he-=(t-t/2);
        t/=2;
        cnt++;
        if(t)dui.push(t);
        if(he<=s)return true;
        if(cnt==x)break;
    }
    if(he<=s)return true;
    else return false;
}

void dfs(int u,int pre)
{
    for(auto i:g[u])
       if(i.first!=pre)
       {
            int dian=i.first, w=i.second;
            
       }
}

void solve()
{
    cin>>n>>s;

    edge.clear();
    sum=0;
    g=vector<vector<pair<int,int>>>(n+10);
    for(int i=1;i<=n-1;i++)
    {
        int a,b,w; cin>>a>>b>>w;
        g[a].push_back({b,w});
        g[b].push_back({a,w});
    }

    dfs(1,0);
    
    int l=0,r=20*n;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(check(mid))r=mid;
        else l=mid+1;
    }
    cout<<l<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}