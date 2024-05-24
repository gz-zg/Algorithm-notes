#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    LL l,r,a; cin>>l>>r>>a;
    LL ll=l/a, rr=r/a;

    if(rr-ll>=1) cout<<max(r%a+rr,a-1+rr-1)<<endl;
    else cout<<rr+r%a<<endl;
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