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