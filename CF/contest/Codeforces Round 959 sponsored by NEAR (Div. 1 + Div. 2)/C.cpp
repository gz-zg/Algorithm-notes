//dp的核心在于重复利用！！！！！
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,x; 
int a[200010];
int s[200010];

void solve()
{
    cin>>n>>x;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]),s[i]=s[i-1]+a[i];
    vector<int>dp(n+10,0);

    int ans=0;
    for(int i=n;i>=1;i--)
    {
        int l=i,r=n;
        while(l<r)
        {
            int mid=(l+r+1)/2;
            if(s[mid]-s[i-1]<=x)l=mid;
            else r=mid-1;
        }
        if(s[l]-s[i-1]<=x)dp[i]=l-i+1+dp[l+2];
        else dp[i]=dp[i+1];
        ans+=dp[i];
    }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}