#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
int a[55];
int b[55];

void solve()
{
    cin>>n;
    int min1=1e18,min2=1e18;
    for(int i=1;i<=n;i++)cin>>a[i],min1=min(min1,a[i]);
    for(int i=1;i<=n;i++)cin>>b[i],min2=min(min2,b[i]);
    int ans=0;
    for(int i=1;i<=n;i++)ans+=max(a[i]-min1,b[i]-min2);
    cout<<ans<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}