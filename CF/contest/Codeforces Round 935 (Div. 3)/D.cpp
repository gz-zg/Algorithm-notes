#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

LL a[N],b[N];

void solve()
{
    int n,m; cin>>n>>m;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    for(int i=1;i<=n;i++)scanf("%lld",&b[i]);

    LL res=a[m];
    for(int j=m+1;j<=n;j++)
        res+=min(a[j],b[j]);
    
    LL ans=res;
    for(int i=m-1;i>=1;i--)
    {
        res=res-a[i+1]+min(a[i+1],b[i+1])+a[i];
        ans=min(ans,res);
    }

    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}