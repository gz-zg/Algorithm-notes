//其实所有可行的行走路线都是单调的<从左往右>或是<从右往左>
//那么不妨假设所有的可行的行走路线都是从左走到右
//然后根据可行的行走路线的终点是哪个点来划分出多个不同的集合
//因此该问题可以通过DP解决:
//状态表示:dp[i][j]表示的是<所有终点是(i,j)这个点的可行的行走路线的最大长度>
#include <bits/stdc++.h>
using namespace std;

int n;
string s[2];

signed main()
{
    cin>>n;
    cin>>s[0]>>s[1];

    int ans=-2e9;
    vector<int>dp(2,0);
    for(int i=0;i<n;i++)
    {
        if(s[0][i]=='R')dp[0]++;
        else dp[0]=0;

        if(s[1][i]=='R')dp[1]++;
        else dp[1]=0;

        if(s[0][i]=='R' && s[1][i]=='R')
            dp={max(dp[0],dp[1]+1),max(dp[1],dp[0]+1)};

        ans=max(ans,dp[0]); 
        ans=max(ans,dp[1]); 
    }
    cout<<max(ans-1,0)<<endl;
    
    return 0;
}