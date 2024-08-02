#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define int long long
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[200010];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    
    int ans=0;
    map<pair<int,int>,int>mp1,mp2,mp3;
    map<tuple<int,int,int>,int>mp;
    for(int i=1;i<=n-2;i++)
    {
        int x=a[i],y=a[i+1],z=a[i+2];
        ans+=mp1[{x,y}]++;
        ans+=mp2[{x,z}]++;
        ans+=mp3[{y,z}]++;
        ans-=3*mp[{x,y,z}]++;
    }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}