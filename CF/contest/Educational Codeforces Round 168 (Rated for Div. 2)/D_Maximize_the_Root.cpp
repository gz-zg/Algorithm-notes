#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
int a[200010];
int p[200010];
vector<vector<int>>g;

int dfs(int u)
{
    if(g[u].size()==0)return a[u];
    int minv=1e18;
    for(int i:g[u])
    {
        minv=min(minv,dfs(i));
    }
    if(u==1)return minv;
    if(a[u]<minv)a[u]=(a[u]+minv)/2;
    else a[u]=minv;
    return a[u];
}

void solve()
{
    cin>>n;
    g=vector<vector<int>>(n+10);
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    for(int i=2;i<=n;i++)
    {
        scanf("%lld",&p[i]);
        g[p[i]].push_back(i);
    }
    int ans=a[1];
    ans+=dfs(1);
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}