#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int a,b,c; cin>>a>>b>>c;
    int cha=abs(a-b);
    cha*=2;
    if(a>cha || b>cha || c>cha)cout<<-1<<endl;
    else
    {
        if(c<=cha/2)cout<<c+cha/2<<endl;
        else cout<<c-cha/2<<endl;
    }   
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}