#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,k;
int x[200010];
int y[200010];

void solve()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)scanf("%lld",&x[i]);
    for(int i=1;i<=n;i++)scanf("%lld",&y[i]);
    sort(x+1,x+1+n);
    vector<int>q(n+10),h(n+10);
    
    for(int i=1,j=1;i<=n;i++)
    {
        while((x[i]-x[j])>k)j++;
        q[i]=i-j+1;
    }
    for(int i=1;i<=n;i++)q[i]=max(q[i],q[i-1]);
    
    for(int i=n,j=n;i>=1;i--)
    {
        while((x[j]-x[i])>k)j--;
        h[i]=j-i+1;
    }
    for(int i=n;i>=1;i--)h[i]=max(h[i],h[i+1]);
    
    int ans=-1e18;
    for(int i=0;i<=n;i++)ans=max(ans,q[i]+h[i+1]);
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}