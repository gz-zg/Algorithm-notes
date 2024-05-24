#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

LL a[N],b[N];

void solve()
{
    LL n,k,q; scanf("%lld%lld%lld",&n,&k,&q);
    for(int i=1;i<=k;i++)scanf("%lld",&a[i]);
    for(int i=1;i<=k;i++)scanf("%lld",&b[i]);

    while (q--)
    {
        LL d; scanf("%lld",&d);
        int l=0,r=k;
        while(l<r)
        {
            int m = (l+r+1)/2;
            if(a[m]<=d)l=m;
            else r=m-1;
        }
        LL ans = b[l];
        if(l==k)cout<<ans<<" ";
        else
        {
            ans+=(b[l+1]-b[l])*(d-a[l])/(a[l+1]-a[l]);
            cout<<ans<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}