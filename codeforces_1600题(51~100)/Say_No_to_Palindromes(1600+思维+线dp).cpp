/*
题目要求的 <不存在长度>=2的回文子串> 等价于 <必然是存在循环节的,即abcabcabc这样>
那么对于三种字符,循环节的种类有六种,我们需要处理出字符串对于每个循环节需要做出的修改次数
f[i][j]表示到第i个字符时,对于第j个循环节,需要修改的次数
对于区间查询,答案就是六种循环节中区间修改次数最少的那一种的次数
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m;
string s;
int dp[200010][7];
string k[7]={"@","abc","acb","bac","bca","cab","cba"};

void solve()
{
    cin>>n>>m>>s; s='@'+s;
    for(int j=1;j<=6;j++)
        for(int i=1;i<=n;i++)
            dp[i][j]=dp[i-1][j]+(s[i]!=k[j][(i-1)%3]);
    while(m--)
    {
        int l,r; cin>>l>>r;
        int ans=1e18;
        for(int i=1;i<=6;i++)ans=min(ans,dp[r][i]-dp[l-1][i]);
        cout<<ans<<endl;
    }
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;
    while(t--)solve();
    return 0;
}