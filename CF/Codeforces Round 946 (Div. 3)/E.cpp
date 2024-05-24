//错了，不能用 《状态机模型》 要用 《背包模型》
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define int long long
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int f[55],xi[55];
pair<int,int> dp[55][2];

void solve()
{
    int m,x; cin>>m>>x;
    for(int i=1;i<=m;i++)cin>>f[i]>>xi[i];
    
    dp[1][0]={0,x};
    if(f[1]==0)dp[1][1]={xi[1],x};
    else dp[1][1]={-INF,-INF};
    for(int i = 2;i<=m;i++)
    {
        if(dp[i-1][0].second>=f[i] && dp[i-1][1].second<f[i])
        {
            dp[i][1]=dp[i-1][0];
            dp[i][1].first+=xi[i];
            dp[i][1].second+=(x-f[i]);  
        }
        else if(dp[i-1][0].second<f[i] && dp[i-1][1].second>=f[i])
        {
            dp[i][1]=dp[i-1][1];
            dp[i][1].first+=xi[i];
            dp[i][1].second+=(x-f[i]);
        }
        else if(dp[i-1][0].second>=f[i] && dp[i-1][1].second>=f[i])
        {
            dp[i][1]=max(dp[i-1][0],dp[i-1][1]);
            dp[i][1].first+=xi[i];
            dp[i][1].second+=(x-f[i]);
        }
        else dp[i][1]={-INF,-INF};

        dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
        dp[i][0].second+=x;
    }
    //cout<<max(dp[m][0].first,dp[m][1].first)<<endl;
    for(int i=1;i<=m;i++)cout<<dp[i][0].first<<" "<<dp[i][0].second<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}