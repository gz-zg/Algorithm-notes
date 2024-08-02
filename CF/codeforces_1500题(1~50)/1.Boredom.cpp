//状态机模型
#include <bits/stdc++.h>
#define int long long
using namespace std;

int v[100010],dp[100010][2];

signed main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x; scanf("%lld",&x);
        v[x]+=x;
    }

    dp[1][0]=0,dp[1][1]=v[1];
    for(int i=2;i<=100000;i++)
    {
        dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
        dp[i][1]=dp[i-1][0]+v[i];
    }
    cout<<max(dp[100000][0],dp[100000][1])<<endl;

    return 0;
}