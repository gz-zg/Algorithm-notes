/*
首先我们要明白要想操作数最小我们应该怎么做
1.让最小的-1
2.让最大的几个数等于最小的
很明显我们应该进行操作1,减到一定数值后再进行操作2最优

关键是我们如何确定要进行多少次操作1呢?
我们发现进行操作2次数顶多n-1次
那么我们就二分总次数
遍历0~min(n-1,mid)枚举操作2的次数
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,k;
int a[200010];
int s[200010];

bool check(int x)
{
    for(int i=0;i<=min(x,n-1);i++)//当总步数为x时,枚举操作2的使用次数
    {
        int op1=x-i;
        int minv=a[n]-op1;
        int now=(i+1)*minv+(s[n-1]-s[i]);
        if(now<=k)return true;
    }
    return false;
}

void solve()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+1+n,greater<int>());
    for(int i=1;i<=n;i++)s[i]=s[i-1]+a[i];
    
    int l=0,r=1e10;
    while(l<r)//二分最小的总步数
    {
        int mid=(l+r)/2;
        if(check(mid))r=mid;
        else l=mid+1;
    }
    cout<<l<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}