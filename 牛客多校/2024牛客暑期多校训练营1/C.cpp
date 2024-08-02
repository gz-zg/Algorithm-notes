#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1000000007; 

int ans[500010];

void solve()
{
    int q; cin>>q;
    int idx=0;
    while(q--)
    {
        int t,v; scanf("%lld %lld",&t,&v);
        idx-=t;
        idx++;
        ans[idx]=(ans[idx-1]+v*idx)%mod;
        cout<<ans[idx]<<endl;
    }   
}

signed main()
{
    solve();
    return 0;
}