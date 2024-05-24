#include<bits/stdc++.h>
#define int long long 
using namespace std;

int a[100010],b[100010],c[100010];
int cnt_a[100010],cnt_c[100010];  //1~100001

signed main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]),a[i]++,cnt_a[a[i]]++;
    for(int i=1;i<=n;i++)scanf("%lld",&b[i]),b[i]++;
    for(int i=1;i<=n;i++)scanf("%lld",&c[i]),c[i]++,cnt_c[c[i]]++;

    for(int i=1;i<=100001;i++)cnt_a[i]+=cnt_a[i-1],cnt_c[i]+=cnt_c[i-1];

    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int t = b[i];
        ans+=cnt_a[t-1]*(cnt_c[100001]-cnt_c[t]);
    }
    cout<<ans<<endl;

    return 0;
}