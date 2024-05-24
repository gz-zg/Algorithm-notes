#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    string s; cin>>s;
    int n = s.size();
    s='0'+s;
    if( (s[n]-'0')%2==0 )cout<<0<<endl;
    else if( (s[1]-'0')%2==0 )cout<<1<<endl;
    else
    {
        for(int i=2;i<=n-1;i++)
            if( (s[i]-'0')%2==0 ){cout<<2<<endl;return;}
        
        cout<<-1<<endl;
    }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}