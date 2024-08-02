//map
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n; 
int a[200010];

void solve()
{
    cin>>n;
    map<int,int>mp;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]),mp[a[i]]++;
    vector<int>res(n+10);
    for(auto i:mp)res[i.second]++;

    int ans=1e18, pre=0, len=mp.size();
    for(int i=1;i<=n;i++)
    {
        ans=min(ans,n-(len-pre)*i);
        pre+=res[i];
    }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}