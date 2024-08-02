#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,k;
int a[200010],b[200010];

bool check(int x)
{
    int cnt=0;
    for(int i=1;i<=n;i++)
        if(a[i]>x)
            cnt+=((a[i]-x)+b[i]-1)/b[i];
    if(cnt>k)return false;
    else return true;
}

int doit(int x)
{
    vector<int>da;
    int res=0,cnt=0;
    for(int i=1;i<=n;i++)
        if(a[i]>x)
        {
            int c=((a[i]-x)+b[i]-1)/b[i];
            cnt+=c;
            res+=a[i]*c-(c-1)*c/2*b[i];
            if(max(a[i]-c*b[i],0LL)==x)da.push_back(max(a[i]-c*b[i],0LL));
        }
        else if(a[i]==x)da.push_back(a[i]);
    
    int ci=min(k-cnt,(int)da.size());
    for(int i=0;i<=ci-1;i++)res+=da[i];
    cout<<res<<endl;
}

void solve()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    for(int i=1;i<=n;i++)scanf("%lld",&b[i]);
    int l=0,r=1e9;
    while(l<r)//如果只有r可行的话，while循环会在l=mid+1后等于r然后直接退出来
    {         //也就不会check(r),r对应的得分也就不会去更新ans了,所以最好先二分出每个数最少可以减到的值，然后求出ans
        int mid=(l+r)/2;
        if(check(mid))r=mid;
        else l=mid+1;
    }
    doit(l);
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}