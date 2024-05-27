#include<bits/stdc++.h>
#define int long long
using namespace std;

int s[2000000];
int sum[2000000];

int find(int x)
{
    int l=1,r=2000000;
    while(l<r)
    {
        int m=(l+r+1)/2;
        if(s[m]<=x)l=m;
        else r=m-1;
    }
    return l;
}

signed main()
{
    for(int i=1;i<=2000000;i++)s[i]=i+s[i-1];
    int k=0;
    for(int i=1;i<=2000000;i++)k+=i,sum[i]=sum[i-1]+k;

    int t; cin>>t;
    while(t--)
    {
        int l,r; scanf("%lld %lld",&l,&r);
        int _l=find(l), _r=find(r);
        l-=(1+_l)*_l/2, r-=(1+_r)*_r/2;
        if(r!=0)r=(1+r)*r/2;
        else r=0;
        if(l!=0)l=(1+l)*l/2-l;
        else l=-_l;
        printf("%lld\n",sum[_r]+r-(sum[_l]+l));
    }

    return 0;
}