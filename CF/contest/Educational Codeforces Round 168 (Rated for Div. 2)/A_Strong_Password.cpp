#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    string s; cin>>s;
    string z="z",a="a";
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            
            if(s[i]<'z') s.insert(i+1,z);
            else s.insert(i+1,a);
            cout<<s<<endl;
            return;
        }
    }   
    if(s[0]<'z')s='z'+s;
    else s='a'+s;
    cout<<s<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}