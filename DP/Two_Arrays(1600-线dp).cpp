/*
状态表示dp[i][j]:第i个位置放数字j的可放重复元素的非递减排序的数量
有关有意思的点:根据题意，可以将b数组反置接在a数组的后面,该数组长度为2m,非递减排序
这样题目要求的就转换成了<在第2m个位置放1~n的非递减排序的数量的和>
并且这题的状态转移方程最初是f[i][j]=f[i-1][j]+f[i-1][j-1]+f[i-1][j-2]+...+f[i-1][1];
可以类比完全背包的状态转移方程的优化方式进行优化变成:f[i][j]=f[i-1][j]+f[i][j-1];
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1e9 + 7;

int n,m;
int dp[25][1010];

void solve()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)dp[1][i]=1;
    for(int i=2;i<=2*m;i++)
        for(int j=1;j<=n;j++)
            dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
    int ans=0;
    for(int i=1;i<=n;i++)ans=(ans+dp[2*m][i])%mod;
    cout<<ans<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;
    while(t--)solve();
    return 0;
}