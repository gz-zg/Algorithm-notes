#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x,y; cin>>n>>x>>y;
    int h=n-x;
    int q=y-1;
    vector<int>ans(n+10,1);
    int sign=-1;
    for(int i=q;i>=1;i--)
    {
        ans[i]=sign;
        sign=-sign;
    }
    sign=-1;
    for(int i=n-h+1;i<=n;i++)
    {
        ans[i]=sign;
        sign=-sign;
    }
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
    cout<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}