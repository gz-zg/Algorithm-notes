#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n,m,k; cin>>n>>m>>k;
    for(int i=n;i>=k;i--)printf("%lld ",i);
    for(int i=m+1;i<=k-1;i++)printf("%lld ",i);
    for(int i=1;i<=m;i++)printf("%lld ",i);
    cout<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}