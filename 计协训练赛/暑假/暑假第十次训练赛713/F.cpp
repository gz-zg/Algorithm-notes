#include <bits/stdc++.h>
#define x first
#define y second
#define int long long
using namespace std;

int n,c;
int a[200010];
int b[200010];

void solve()
{
    cin>>n>>c;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    for(int i=1;i<=n-1;i++)scanf("%lld",&b[i]);
    vector<pair<int,int>>dp(n+10,{0,0});
    for(int i=2;i<=n;i++)
    {
        dp[i].x = dp[i-1].x + 1;
        if(dp[i-1].y >= b[i-1])dp[i].y = dp[i-1].y - b[i-1];
        else
        {
            dp[i].x += (b[i-1] - dp[i-1].y + a[i-1] - 1) / a[i-1];
            dp[i].y = dp[i-1].y + (b[i-1] - dp[i-1].y + a[i-1] - 1) / a[i-1] * a[i-1] - b[i-1];
        }
    }

    int ans = 1e18;
    for(int i=1;i<=n;i++)
    {
        int day = dp[i].x;
        if(dp[i].y>=c)ans=min(ans,day);
        else 
        {
            day+=(c-dp[i].y+a[i]-1)/a[i];
            ans=min(ans,day);
        }
    }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}