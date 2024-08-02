#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int l,r,x,a,b;
    cin>>l>>r>>x>>a>>b;
    if(a==b)cout<<0<<endl;
    else if(abs(a-b)>=x)cout<<1<<endl;
    else
    {
        if(r-max(a,b)>=x || min(a,b)-l>=x)cout<<2<<endl;
        else if(r-min(a,b)>=x && max(a,b)-l>=x)cout<<3<<endl;
        else cout<<-1<<endl;
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}