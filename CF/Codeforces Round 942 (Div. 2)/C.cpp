//二分+贪心
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

LL n,k;
LL a[200010];

bool check(LL m)
{
    LL sum=0;
    for(int i=1;i<=n;i++)
        if(a[i]<m)
            sum+=m-a[i];
    
    if(sum<=k)return true;
    else return false;
}

void solve()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);

    //在选定二分范围时唯一需要注意的是->ans一定要在[l,r]里面(而ans是不是[l,r]的端点都无所谓)
    LL l=1,r=2e12;  //二分范围开小了，r因该考虑上每种卡牌原有数量的极值和金币的极值
    while(l<r)
    {
        LL m=(l+r+1)/2;
        if(check(m))l=m;
        else r=m-1;
    }

    LL ans=l*n-(n-1);  //这是至少可以得到的全排列的数量
//那么对于多出来的卡片，每种可以拿出一个贴在现有排列的两边，使ans++,如果有多余的k,也是这个贪心的套路
    LL h=0;
    for(int i=1;i<=n;i++)
        if(a[i]<l)
        {
            h+=l-a[i];
            a[i]=l;
        }
    LL s=k-h;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==l)
        {
            if(s>=1)ans++,s--;
        }
        else ans++;
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}