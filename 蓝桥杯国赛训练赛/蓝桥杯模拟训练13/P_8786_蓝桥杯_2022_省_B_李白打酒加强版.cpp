#include<bits/stdc++.h>
#define int long long 
using namespace std;

const int mod = 1000000007;

int n,m;
int dp[110][110][110];

signed main()
{
    cin>>n>>m;

    dp[0][0][2]=1;
    for(int i=0;i<=n;i++) //店
        for(int j=0;j<=m-1;j++) //花
        {
            if(i==0 && j==0)continue;
            for(int k=0;k<=m;k++) //剩余的酒的个数
            {
                if(j-1>=0)dp[i][j][k]=(dp[i][j][k]+dp[i][j-1][k+1])%mod;
                if(k%2==0 && i-1>=0)dp[i][j][k]=(dp[i][j][k]+dp[i-1][j][k/2])%mod;
            }
        }
    cout<<dp[n][m-1][1]<<endl;

    return 0;
}