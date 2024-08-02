#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[200010];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    sort(a+1,a+1+n);
    int k=0,ans=-2e9;;
    for(int i=1;i<=n;i++)
    {
        a[i]+=k;
        ans=max(ans,a[i]);
        k-=a[i];
    }      
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}