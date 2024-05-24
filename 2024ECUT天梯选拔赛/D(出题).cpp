#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    LL a,b,c; cin>>a>>b>>c;
    LL ans=2e18;
    LL num=1;
    for(int i=0;i<=32;i++)
    {
        ans=min(ans,(c+num-1)/num*b+i*a);
        num=num*2;  
    }
    cout<<ans<<endl;
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