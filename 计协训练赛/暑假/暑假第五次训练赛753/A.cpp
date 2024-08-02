#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    string p,s; cin>>p>>s;
    map<char,int>mp;
    for(int i=0;i<p.size();i++)mp[p[i]]=i;
    int ans=0;
    for(int i=0;i<s.size()-1;i++)ans+=abs(mp[s[i+1]]-mp[s[i]]);
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}