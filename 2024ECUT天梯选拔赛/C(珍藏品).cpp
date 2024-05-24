#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

LL a[N];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    sort(a+1,a+1+n);
    LL ans=0;
    ans=max(ans,a[n]);
    ans=max(ans,a[n]+a[n-1]);
    cout<<ans<<endl;
}

int main()
{
    solve();
    
    return 0;
}