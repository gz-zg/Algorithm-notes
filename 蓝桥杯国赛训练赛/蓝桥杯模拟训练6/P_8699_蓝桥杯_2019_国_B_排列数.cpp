#include<bits/stdc++.h>

using namespace std;

const int mod = 123456;

int n,k;
int dp[520][520];

int main()
{
    cin>>n>>k;
    if(n==1)
    {
        if(k==1)cout<<1<<endl;
        else cout<<0<<endl;
        return 0;
    }

    dp[2][1]=2;
    for(int i=2;i<n;i++)
        for(int j=1;j<=k;j++)
        {
            dp[i+1][j]=(dp[i+1][j]+dp[i][j]*j)%mod;
            dp[i+1][j+1]=(dp[i+1][j+1]+dp[i][j]*2)%mod;
            dp[i+1][j+2]=(dp[i+1][j+2]+dp[i][j]*(i-j-1))%mod;
        }
    cout<<dp[n][k]<<endl;

    return 0;
}