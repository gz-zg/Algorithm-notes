#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    string s; cin>>s;
    if((s[s.size()-1]-'0')%2==0)
    {
        cout<<0<<endl;
        return;
    }
    int sign=0;
    for(char i:s)
        if((i-'0')%2==0)
            sign=1;
    if(sign)
    {
        if((s[0]-'0')%2==0)cout<<1<<endl;
        else cout<<2<<endl;
    }
    else cout<<-1<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}