#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

int a[N];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    sort(a+1,a+1+n);
    if(a[n]-a[n-1]<=1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;   
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}