#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    map<char,int>mp;
    mp[s[0]]++;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!=s[i-1] && mp[s[i]]>=1)
        {
            cout<<"NO"<<endl;
            return;
        }
        mp[s[i]]++;
    }
    cout<<"YES"<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}