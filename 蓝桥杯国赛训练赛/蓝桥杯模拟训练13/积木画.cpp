#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int st[4][4]={
    {1, 1, 1, 1},
    {0, 0, 1, 1},
    {0, 1, 0, 1},
    {1, 0, 0, 0}
};
int dp[2][4];

int main()
{
    int n; cin>>n;  
//状态压缩DP: dp[i][j]表示:前i-1列已经摆满并且只操作了前i-1列时第i列的状态为j的所有方案的数量
//对于《操作》的定义是:如果摆放的一个积木的最左边的位置为第i列，则说明已经操作了第i列
    dp[1&1][0]=1;
    for(int i=1;i<=n;i++)
    {
        memset(dp[i+1&1],0,sizeof dp[i+1&1]);
        for(int j=0;j<=3;j++)
            for(int k=0;k<=3;k++)
                if(st[j][k]==1)
                    dp[i+1&1][k]=(dp[i+1&1][k]+dp[i&1][j])%mod;
    }
    
    cout<<dp[n+1&1][0]<<endl;

    return 0;
}