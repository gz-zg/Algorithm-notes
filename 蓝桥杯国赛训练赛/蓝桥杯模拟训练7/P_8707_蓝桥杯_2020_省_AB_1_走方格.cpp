#include<bits/stdc++.h>

using namespace std;

long long dp[35][35];

int main()
{
    int n,m; cin>>n>>m;
    
    for(int i=1;i<=m;i++)dp[1][i]=1;
    for(int i=1;i<=n;i++)dp[i][1]=1;
    for(int i=2;i<=n;i++)
        for(int j=2;j<=m;j++)
            if(i%2!=0 || j%2!=0)
                dp[i][j]=dp[i-1][j]+dp[i][j-1];

    cout<<dp[n][m]<<endl;

    return 0;
}