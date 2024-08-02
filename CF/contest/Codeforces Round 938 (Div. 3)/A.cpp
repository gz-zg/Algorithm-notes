#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n,a,b; cin>>n>>a>>b;
    if(b<=2*a)cout<<n/2*b+n%2*a<<endl;
    else cout<<n/2*2*a+n%2*a<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}