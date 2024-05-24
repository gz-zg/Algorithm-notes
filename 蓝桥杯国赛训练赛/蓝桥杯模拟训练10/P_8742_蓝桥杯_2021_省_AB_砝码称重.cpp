//使用背包模型来判断能凑出哪些数字
#include<bits/stdc++.h>
#define int long long
using namespace std;

int a[110];
bool dp[110][100010];

signed main()
{
    int n; cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)cin>>a[i],sum+=a[i];

    //dp[0][0]=true;
    //正向DP
    // for(int i=0;i<=n-1;i++)
    //     for(int j=0;j<=sum;j++)
    //         if(dp[i][j])
    //         {
    //             dp[i+1][j]=true;
    //             dp[i+1][j+a[i+1]]=true;
    //             if(j-a[i+1]>=0)dp[i+1][j-a[i+1]]=true;
    //             if(a[i+1]-j>=0)dp[i+1][a[i+1]-j]=true;
    //         }

    //反向DP
    dp[0][0]=true;
    for(int i=1;i<=n;i++)
        for(int j=0;j<=sum;j++)
        {
            dp[i][j]=dp[i][j] || dp[i-1][j];
            if(j-a[i]>=0)dp[i][j]=dp[i][j] || dp[i-1][j-a[i]];
            if(j+a[i]<=sum)dp[i][j]=dp[i][j] || dp[i-1][j+a[i]];
            if(a[i]-j>=0)dp[i][j]=dp[i][j] || dp[i-1][a[i]-j];
        }
    
    int ans=0;
    for(int i=1;i<=sum;i++)
        if(dp[n][i])   
            ans++;
    cout<<ans<<endl;

    return 0;
}