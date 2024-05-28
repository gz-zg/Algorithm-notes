#include<bits/stdc++.h>
#define int long long 
using namespace std;

const int mod = 1000000007; 

int a[100010],b[100010];

signed main()
{
    int n; cin>>n;
    
    int na; cin>>na;
    for(int i=1;i<=na;i++)scanf("%lld",&a[i]);
    reverse(a+1,a+1+na);
    
    int nb; cin>>nb;
    for(int i=1;i<=nb;i++)scanf("%lld",&b[i]);
    reverse(b+1,b+1+nb);

    int ans=0; int t=1;
    for(int i=1;i<=max(na,nb);i++)
    {
        ans=(ans+(a[i]-b[i])*t)%mod;
        t=t*max({2LL,a[i]+1,b[i]+1})%mod;
    }
    
    //题目要求的是《ans的正余数表示》，但是上面的for循环求出的可能是《ans的负余数表示》
    //该怎么办呢？只需要将(ans+mod)%mod就可以使得如果ans不是正余数表示的话就将它转换成正余数表示
    cout<<(ans+mod)%mod<<endl;

    return 0;
}