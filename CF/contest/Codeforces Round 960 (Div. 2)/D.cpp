#include <bits/stdc++.h>
using namespace std;

int n;
int a[200010];

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    
    vector<int>dp(n+10,1e18);
    dp[0] = 0;
    int j = -1e18, maxc = 1e18;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==0)dp[i]=dp[i-1];
        if(1<=a[i] && a[i]<=2)
        {
            dp[i]=min(dp[i],dp[i-1]+1);
            if(j>=1 && (i-j+1)%2==0 && maxc<=4)dp[i]=min(dp[i],dp[j-1]+i-j);
            j=i;
            maxc=a[i];
        }
        if(a[i]>2) dp[i]=min(dp[i],dp[i-1]+1);
        maxc=max(maxc,a[i]);
    }
    cout<<dp[n]<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}