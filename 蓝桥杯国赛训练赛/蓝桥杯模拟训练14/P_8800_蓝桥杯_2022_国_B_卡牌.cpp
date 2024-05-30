#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,m;
int a[200010],b[200010];

bool check(int mid)
{
    int num=0;
    for(int i=1;i<=n;i++)
        if(a[i]<mid)
        {
            if(mid-a[i]>b[i])return false;
            else num+=mid-a[i];
        }
    if(num>m)return false;
    else return true;
}

signed main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    for(int i=1;i<=n;i++)scanf("%lld",&b[i]);

    int l=0,r=4e5;
    while(l<r)
    {
        int mid=(l+r+1)/2;
        if(check(mid))l=mid;
        else r=mid-1;
    }
    cout<<l<<endl;

    return 0;
}