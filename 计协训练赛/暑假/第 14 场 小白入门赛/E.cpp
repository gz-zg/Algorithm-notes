//模运算下可以直接<减>吗？
#include <bits/stdc++.h>
#define int long long
typedef long long LL;
using namespace std;
const int mod = 998244353; 

int a[10];
int jie[200010];
int cnt[10];  //表示的是每个数位上各个数字可以取的数量

LL power(LL a, LL b, LL p)  //快速幂
{
    LL ans=1 % p;
    for(;b;b>>=1)
    {
        if(b&1)ans=ans*a%p;
        a=a*a%p;
    }
    return ans;
}

signed main()
{
    int len=0;
    for(int i=1;i<=9;i++)cin>>a[i],len+=a[i];

    jie[0]=jie[1]=1;
    for(int i=2;i<=200000;i++)jie[i]=jie[i-1]*i%mod;

    for(int i=1;i<=9;i++)
        if(a[i]!=0)
        {
            cnt[i]=jie[len-1];
            for(int j=1;j<=9;j++)
                if(a[j]!=0)
                {
                    if(j!=i)cnt[i]=cnt[i]*power(jie[a[j]],mod-2,mod)%mod;
                    else cnt[i]=cnt[i]*power(jie[a[j]-1],mod-2,mod)%mod;
                }
        }

    int ans=0;
    for(int i=1;i<=9;i++)ans+=(cnt[i]*i)%mod;
    int t=ans;
    for(int i=2;i<=len;i++)ans=(ans*10+t)%mod;
    cout<<ans<<endl;

    return 0;
}