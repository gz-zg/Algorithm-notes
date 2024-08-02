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
    for(int i=1;i<=n;i++)cout<<i%n+1<<" ";
    cout<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}