#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n,m; cin>>n>>m;
    if(n>=m && (n-m)%2==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}