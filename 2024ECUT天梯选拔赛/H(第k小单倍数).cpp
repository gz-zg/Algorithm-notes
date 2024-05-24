#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

LL gcd(LL a,LL b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

void solve()
{
    LL n,m,k,lcm;
    cin>>n>>m>>k;
    lcm=m*n/gcd(n,m);

    LL l=1,r=1e18;
    while(l<r)
    {
        LL mid=(l+r)/2;
        if( (mid/n+mid/m-mid/lcm*2)>=k ) r=mid;
        else l=mid+1;
    }

    cout<<l<<endl;
}

int main()
{
    solve();

    return 0;
}