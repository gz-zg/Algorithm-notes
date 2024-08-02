#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,x;

void solve()
{
    cin>>n>>x;
    if(n<=2)cout<<1<<endl;
    else cout<<((n-2)+(x-1))/x+1<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}