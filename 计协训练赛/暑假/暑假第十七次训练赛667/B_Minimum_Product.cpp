//基本思路：让两数的差距越大越好
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a,b,x,y,n;

void solve()
{
    cin>>a>>b>>x>>y>>n;
    int aa=a,bb=b,xx=x,yy=y,nn=n;
    int ans1,ans2;

    if((a-x)<=n)n-=(a-x),a=x;
    else a-=n,n=0;
    if(n!=0)b-=n;
    b=max(b,y);
    ans1=a*b;

    a=aa,b=bb,x=xx,y=yy,n=nn;
    if((b-y)<=n)n-=(b-y),b=y;
    else b-=n,n=0;
    if(n!=0)a-=n;
    a=max(a,x);
    ans2=a*b;
    
    cout<<min(ans1,ans2)<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}