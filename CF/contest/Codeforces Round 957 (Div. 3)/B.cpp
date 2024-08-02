#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[100010];

void solve()
{
    int n,k; cin>>n>>k;
    
    for(int i=1;i<=k;i++)scanf("%lld",&a[i]);
    sort(a+1,a+1+k);

    int ans=0;
    for(int i=1;i<=k-1;i++)
        if(a[i]==1)ans++;
        else ans+=(a[i]-1+a[i]);
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}