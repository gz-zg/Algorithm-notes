//使用<差分>去进行区间（差分数组对应的前缀和数组的区间）修改
#include <bits/stdc++.h>
#define int long long
using namespace std; 
const int N = 200010;

int n,q;
int a[N],c[N];

signed main()
{
    cin>>n>>q;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    while(q--)
    {
        int l,r; scanf("%lld %lld",&l,&r);
        c[l]++,c[r+1]--;
    }
    for(int i=1;i<=n;i++)c[i]+=c[i-1];
    sort(c+1,c+1+n); sort(a+1,a+1+n);
    int ans=0;
    for(int i=1;i<=n;i++)ans+=c[i]*a[i];
    cout<<ans<<endl;

    return 0;
}