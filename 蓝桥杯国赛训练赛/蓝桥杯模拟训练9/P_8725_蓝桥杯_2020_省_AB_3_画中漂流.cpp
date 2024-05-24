#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1000000007;

int d,t,m;
int dp[3010][1510];

signed main()
{
    cin>>d>>t>>m;

    dp[0][m]=1;
    for(int i=1;i<=t;i++)
        for(int j=0;j<=m;j++)
        {
            int len=d+(m-j)-(i-(m-j));
            if(len>0)dp[i][j]=(dp[i-1][j]+dp[i-1][j+1])%mod;
        }
    
    cout<<dp[t][0]<<endl;

    return 0;
}