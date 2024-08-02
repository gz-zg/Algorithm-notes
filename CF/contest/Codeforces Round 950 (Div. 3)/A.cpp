#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n,m; cin>>n>>m;
    string s; cin>>s;
    map<char,int>mp;
    for(char i:s)mp[i]++;
    
    int ans=0;
    for(int i='A';i<='G';i++)
        if(mp[i]<m)
            ans+=m-mp[i];
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}