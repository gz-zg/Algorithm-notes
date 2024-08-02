//想像一下 羊群的<最终的情况>是怎么样的
//可以发现，最终情况一定是以某一条线作为分界线，所有的羊都往这条分界线上靠拢
//然后就可以通过DP求出：
//q[i]:1~i中的所有羊全部往i靠拢所需要的最少移动次数
//h[i]:i~n中的所有羊全部往i靠拢所需要的最少移动次数
//最后枚举所有分界线找到最少的移动次数
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n; cin>>n;
    string s; cin>>s; s='@'+s;

    vector<int>q(n+10,0),h(n+10,0);
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(s[i]=='*')cnt++;
        if(s[i]=='*')q[i]=q[i-1];
        else q[i]=q[i-1]+cnt;
    }
    cnt=0;
    for(int i=n;i>=1;i--)
    {
        if(s[i]=='*')cnt++;
        if(s[i]=='*')h[i]=h[i+1];
        else h[i]=h[i+1]+cnt;
    }

    int ans=1e18;
    for(int i=0;i<=n;i++)ans=min(ans,q[i]+h[i+1]);
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}