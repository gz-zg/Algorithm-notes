#include <bits/stdc++.h>
#define int long long
using namespace std;

int zhi[70];

void solve()
{
    int n; cin>>n;
    string x=to_string(n);
    int ans=1e18;
    for(int i=0;i<=62;i++)
    {
        string s=to_string(zhi[i]);
        int l,r;
        for(l=0,r=0;l<x.size()&&r<s.size();l++)
            if(x[l]==s[r])
                r++;
        int t=(x.size()-r)+(s.size()-r);
        ans=min(ans,t);
    }
    cout<<ans<<endl;
}

signed main()
{
    zhi[0]=1;
    for(int i=1;i<=62;i++)zhi[i]=zhi[i-1]*2;

    int t; cin>>t;
    while(t--)solve();
    return 0;
}