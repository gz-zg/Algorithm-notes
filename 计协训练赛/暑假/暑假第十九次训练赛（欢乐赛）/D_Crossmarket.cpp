#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,m;

void solve()
{
    cin>>n>>m;
    if(n==1 && m==1)cout<<0<<endl;
    else cout<<min(m+n+m-2,2*n+m-2)<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}