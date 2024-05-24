#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int x,y; cin>>x>>y;
    int ans=(y+1)/2;
    if(ans*15-y*4>=x)cout<<ans<<endl;
    else
    {
        int t=x-(ans*15-y*4);
        cout<<ans+(t+14)/15<<endl;
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}