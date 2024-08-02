#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m; 
int a[200010];

void solve()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    sort(a+1,a+1+n);

    int ans=-1e18;
    for(int i=1;i<=n;i++)
    {
        int tmp=i;
        int t=a[i];
        int sum=0;
        int j=i-1;
        while(j+1<=n && a[j+1]-t<=1)
        {
            j++,sum+=a[j];
            while(sum>m)sum-=a[i],i++;
            ans=max(ans,sum);
        }
        
        while(tmp+1<=n && a[tmp+1]==a[tmp])tmp++;
        i=tmp;
    }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}