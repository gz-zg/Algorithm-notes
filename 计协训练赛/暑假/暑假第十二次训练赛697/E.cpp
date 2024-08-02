#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1e9 + 7; 

int n,k;
int a[1010];

int qmi(int a, int b, int p)  //快速幂
{
    int ans=1 % p;
    for(;b;b>>=1)
    {
        if(b&1)ans=ans*a%p;
        a=a*a%p;
    }
    return ans;
}

int C(int a,int b)
{
    int ans=1;
    for(int i=a,j=1;j<=a-b;i--,j++)
    {
        ans=ans*i%mod;
        ans=ans*qmi(j,mod-2,mod)%mod;
    }
    return ans;
}

void solve()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i]; 
    sort(a+1,a+1+n);
    int pos=n-k+1;
    while(pos+1<=n && a[pos+1]==a[pos])pos++;
    
    int bb=pos-(n-k+1)+1,aa=0;
    for(int i=1;i<=n;i++)
        if(a[i]==a[n-k+1])
            aa++;
    cout<<C(aa,bb)<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}