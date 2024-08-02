#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n,k; cin>>n>>k;
    vector<int>res;
    res.push_back(n);
    for(int i=n-1;i>=1;i--)
    {
        res.push_back(i);
        res.push_back(i);
    }
    int idx=0;
    int ans=0;
    while(k>=1)
    {
        k-=res[idx++];
        ans++;
    }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}