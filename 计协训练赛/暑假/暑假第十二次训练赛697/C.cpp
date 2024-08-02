#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int x,y,k;
int a[200010];
int b[200010];

void solve()
{
    cin>>x>>y>>k;
    for(int i=1;i<=k;i++)scanf("%lld",&a[i]);
    for(int i=1;i<=k;i++)scanf("%lld",&b[i]);

    int ans=0;
    map<int,int>mp1,mp2;
    for(int i=1;i<=k;i++)
    {
        ans+=i-1-mp1[a[i]]-mp2[b[i]];
        mp1[a[i]]++;
        mp2[b[i]]++;
    }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}