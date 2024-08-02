#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n,m; cin>>n>>m;
    int x=m,y=m,pret=0,sign=1;
    for(int i=1;i<=n;i++)
    {
        int t,l,r; scanf("%lld %lld %lld",&t,&l,&r);
        int g=t-pret; pret=t;
        x-=g,y+=g;
        x=max(x,l); y=min(y,r);
        if(x>y)sign=0;
    }
    if(sign)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}