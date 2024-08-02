#include <bits/stdc++.h>
using namespace std;

int n;
int a[200010];

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    
    long long ans=0;
    map<int,int>mp;
    for(int i=1;i<=n;i++)ans+=mp[a[i]-i],mp[a[i]-i]++;
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}