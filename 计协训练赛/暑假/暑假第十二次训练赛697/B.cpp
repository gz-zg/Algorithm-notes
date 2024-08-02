#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;

void solve()
{
    cin>>n;
    if(n/2020>=n%2020)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}