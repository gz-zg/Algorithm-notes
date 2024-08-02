#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m;
int a[200010];

signed main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    sort(a+1,a+1+n);

    vector<int>dp(n+10,0);
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        dp[i]=dp[i-1]+a[i]+mp[i%m];
        mp[i%m]+=a[i];
    }

    for(int i=1;i<=n;i++)cout<<dp[i]<<" ";

    return 0;
}