#include <bits/stdc++.h>
using namespace std;

int a[8010];

void solve()
{
    int n; cin>>n;
    if(n==1)
    {
        int tmp; cin>>tmp;
        cout<<0<<endl;return;
    }

    int cnt[8010]={0};
    for(int i=1;i<=n;i++)cin>>a[i],cnt[a[i]]++;
    for(int i=1;i<=n;i++)a[i]+=a[i-1];

    int ans=0;
    for(int i=1;i<=n-1;i++)
        for(int j=i+1;j<=n;j++)
            if(a[j]-a[i-1]<=n && cnt[a[j]-a[i-1]]!=0)
                ans+=cnt[a[j]-a[i-1]],cnt[a[j]-a[i-1]]=0;
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}