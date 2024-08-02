#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,h; 
int a[200010];

int dfs(int u,int pow,int green,int blue)
{
    if(u==n+1)return 0;

    if(pow>a[u])return dfs(u+1,pow+a[u]/2,green,blue)+1;
    int ans1=green?dfs(u,pow*2,green-1,blue):0;
    int ans2=blue?dfs(u,pow*3,green,blue-1):0;
    return max(ans1,ans2);
}

void solve()
{
    cin>>n>>h;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    sort(a+1,a+1+n);
    cout<<dfs(1,h,2,1)<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}