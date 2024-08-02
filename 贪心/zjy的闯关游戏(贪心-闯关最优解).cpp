#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m;
int x[100010],y[100010];

signed main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)scanf("%lld %lld",&x[i],&y[i]);
    int ans=1e18;
    int pre=0;
    for(int i=1;i<=min(n,m);i++)
    {
        ans=min(ans,pre+x[i]+(m-i+1)*y[i]);
        pre=pre+x[i]+y[i];
    }
    cout<<ans<<endl;

    return 0;
}