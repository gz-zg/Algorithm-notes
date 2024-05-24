#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    map<char,int>mp;
    
    for(char i:s)
        if(mp[i]==0)
            mp[i]++;
    string t;
    for(auto i:mp)
        if(i.second==1)
            t+=i.first;
    map<char,char>mp1;
    for(int i=0;i<t.size();i++)
        mp1[t[i]]=t[t.size()-1-i];
    for(int i=0;i<n;i++)
        s[i]=mp1[s[i]];
    cout<<s<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}
