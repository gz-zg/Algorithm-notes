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
    string ans;
    int pre=0;
    while(n)
    {
        int v=max(n,9);
        if(v==per)
        {

        }
        n-=v;
        ans+=char(v+'0');
    }
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}