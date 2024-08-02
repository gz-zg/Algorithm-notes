#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    string s; cin>>s;
    int ans=0;
    map<char,int>mp; int t=0;
    for(int i=0;i<s.size();i++)
    {
        t++;
        mp[s[i]]++;
        if(mp[s[i]]==2)
        {
            ans+=t-2;
            mp.clear();
            t=0;
        }
    }
    cout<<ans+t<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}