#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,k;
vector<vector<int>>g;

int cnt;
int dfs(int u,int pre,int mid)
{
    int num=1;
    for(int i:g[u])
        if(i!=pre)
            num+=dfs(i,u,mid);
    if(num>=mid){cnt++; return 0;}
    else return num;
}

bool check(int mid)
{
    cnt=0;
    int gen=dfs(1,0,mid);
    if(cnt<k)return false;
    else if(cnt==k)
    {
        if(gen>=mid)return true;
        else return false;
    }
    else return true;
}

void solve()
{
    cin>>n>>k;
    g=vector<vector<int>>(n+10);
    for(int i=1;i<=n-1;i++)
    {
        int a,b; cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int l=1,r=n;
    while(l<r)
    {
        int mid=(l+r+1)/2;
        if(check(mid))l=mid;
        else r=mid-1;
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