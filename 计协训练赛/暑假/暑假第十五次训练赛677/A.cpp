#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

string x;

void solve()
{
    cin>>x;
    int ans=0;
    ans+=((x[0]-'0')-1)*10;
    for(int i=1;i<=x.size();i++)ans+=i;
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}