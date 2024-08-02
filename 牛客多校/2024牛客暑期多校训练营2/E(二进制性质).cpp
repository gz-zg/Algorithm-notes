//x与x-(x&-x)的gcd等于(x&-x)
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int x; cin>>x;
    if(x==(x&-x))cout<<-1<<endl;
    else cout<<x-(x&-x)<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}