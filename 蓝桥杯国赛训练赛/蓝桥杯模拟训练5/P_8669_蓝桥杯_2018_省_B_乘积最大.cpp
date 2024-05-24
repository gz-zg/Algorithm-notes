#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1000000009;

int a[100010];

signed main()
{
    int n,k; cin>>n>>k;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    sort(a+1,a+1+n);

    int ans=1,f=1;
    if(k%2==1)
    {
        ans=a[n];
        if(a[n]<0)f=-1;
        n--,k--;
    }
    int l=1,r=n;
    while(k)
    {
        int x=a[l]*a[l+1];  //x和y只有在全选（即n==k）的时候的最后一次选择中才可能为负数，其他情况下全为正数
        int y=a[r]*a[r-1];
        if(f*x>f*y)
        {
            ans=ans*(x%mod)%mod;
            l+=2;
        }
        else
        {
            ans=ans*(y%mod)%mod;
            r-=2;
        }
        k-=2;
    }
    cout<<ans<<endl;

    return 0;
}