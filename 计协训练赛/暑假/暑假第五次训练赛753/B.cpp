#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int x,n; cin>>x>>n;
    int cnt=n/4*4+1;
    n%=4;
    while(n--)
    {
        if(x%2==0)x-=cnt++;
        else x+=cnt++;
    }
    cout<<x<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}