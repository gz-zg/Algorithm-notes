/*
状态表示f[i][1/2/3]: 字符串s 的 1~i 的所有字符串中a/ab/abc总的出现次数
!!!注意!!!: 前i个字符里面每有一个 ? 都相当于将原来的字符串数量乘3
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1e9 + 7;
 
int n;
string s;
vector<vector<int>>dp(200010,vector<int>(4));

int qmi(int a,int b,int p)
{
    int ans=1%p;
    for(;b;b>>=1)
    {
        if(b&1)ans=ans*a%p;
        a=a*a%p;
    }
    return ans;
}

signed main()
{
    cin>>n>>s; s='@'+s;

    int nk=0;
    for(int i=1;i<=n;i++)
    {
        dp[i]=dp[i-1];
        if(s[i]=='a')dp[i][1]=(dp[i-1][1]+qmi(3,nk,mod))%mod;
        else if(s[i]=='b')dp[i][2]=(dp[i-1][2]+dp[i-1][1])%mod;
        else if(s[i]=='c')dp[i][3]=(dp[i-1][3]+dp[i-1][2])%mod;
        else if(s[i]=='?')
        {
            dp[i][1]=(dp[i-1][1]*3+qmi(3,nk,mod))%mod;
            dp[i][2]=(dp[i-1][2]*3+dp[i-1][1])%mod;
            dp[i][3]=(dp[i-1][3]*3+dp[i-1][2])%mod;
            nk++;
        }
    }

    cout<<dp[n][3]<<endl;

    return 0;
}