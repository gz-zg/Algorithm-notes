#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1e9 + 7; 

string s;

void solve()
{
    cin>>s; 
    int n=s.size();
    s='@'+s;
    
    vector<int>he(n+10);
    for(int i=1;i<=n;i++)
        if(s[i]=='1')he[i]=he[i-1]+1;
        else he[i]=he[i-1]-1;

    int ans=0;
    map<int,int>mp; mp[0]=1;
    for(int i=1;i<=n;i++)
    {
        ans += mp[he[i]]*(n-i+1);
        mp[he[i]] += i+1;
        ans %= mod;
    }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}