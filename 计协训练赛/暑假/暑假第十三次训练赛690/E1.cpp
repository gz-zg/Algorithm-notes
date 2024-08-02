//<双指针> 枚举左端点找右端点 和 枚举右端点找左端点 都一样，视情况选择更方便的一种就行
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
int a[200010];

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    sort(a+1,a+1+n);
    int ans=0;
    int j=0;
    for(int i=1;i<=n;i++)
    {
        while(j+1<=n && a[j+1]-a[i]<=2)j++;
        if(j-i>=2)ans+=(j-i)*(j-i-1)/2;
    }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}