//简单dp+滚动数组
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1000000007; 

int f[2][4];

signed main()
{
    int n; cin>>n;
    f[0&1][3]=1;
    for(int i=1;i<=n;i++)
    {
        f[i&1][0]=(f[(i-1)&1][1]+f[(i-1)&1][2]+f[(i-1)&1][3])%mod;
        f[i&1][1]=(f[(i-1)&1][0]+f[(i-1)&1][2]+f[(i-1)&1][3])%mod;
        f[i&1][2]=(f[(i-1)&1][0]+f[(i-1)&1][1]+f[(i-1)&1][3])%mod;
        f[i&1][3]=(f[(i-1)&1][0]+f[(i-1)&1][1]+f[(i-1)&1][2])%mod;
    }
    cout<<f[n&1][3]<<endl;

    return 0;
}