#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int a,b; cin>>a>>b;
    if(a>b)swap(a,b);
    int ans=(b-a)/10;
    if((b-a)%10!=0)ans++;
    cout<<ans<<endl;    
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}
