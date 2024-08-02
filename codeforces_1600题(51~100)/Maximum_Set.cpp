#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 998244353;
const int N = 100010;

int l,r;

void solve()
{
    cin>>l>>r;
    int x=l,maxc=1;
    while(x*2<=r)x*=2,maxc++;
    if(x==l)
    {
        cout<<1<<" "<<r-l+1<<endl;
        return;
    }

    int num=max(0LL,(r-x)/(1<<(maxc-1)))+(x<=r);//全为2的方案数
    x=x/2*3;
    int cnt=max(0LL,(r-x)/((1<<(maxc-2))*3))+(x<=r);
    num=(num+cnt*(maxc-1))%mod;//包含一个3的方案数
    cout<<maxc<<" "<<num<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}