#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 998244353; 
const int N = 100010;

vector<long long>f(N);

int main()
{
    f[0]=1; f[1]=2;
    for(int i=2;i<=100000;i++)
        f[i] = (f[i-1] * 2 + f[i-2]) % mod;//因为求f[i]的过程中没有涉及到了<减法>，因此取模后的f[i]一定是<正余数>，不可能会是<负余数>,
        //因此不需要%mod+mod后再模mod了。

    int t; cin>>t;
    while(t--)
    {
        int k; cin>>k;
        cout<<f[k]<<endl;
    }

    return 0;
}