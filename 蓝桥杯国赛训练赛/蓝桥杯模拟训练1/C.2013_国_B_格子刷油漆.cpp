//想不到什么好的做法，呜呜呜
//dp
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

LL n;
LL a[1010];
LL b[1010];

int main()
{
    cin>>n;
    if(n==1){cout<<2<<endl;return 0;}

    a[1]=1,a[2]=6;
    b[1]=1,b[2]=2;
    for(LL i=3;i<=n;i++)
    {
        b[i] = b[i-1] * 2 % mod;
        a[i] = (b[i] + a[i-1] * 2 + a[i-2] * 4) % mod;
    }

    LL ans = a[n] * 4 % mod;
    for(LL i=2;i<n;i++)
    {
        ans = (ans + 4 * b[i] * a[n-i]) % mod;
        ans = (ans + 4 * b[n-i+1] * a[i-1]) % mod;
    }
    cout<<ans<<endl;

    return 0;
}