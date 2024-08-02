#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[200010];
int q[200010],h[200010];

signed main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);

    q[1]=1;
    for(int i=2;i<=n;i++)
        if(a[i]>a[i-1])q[i]=q[i-1]+1;
        else q[i]=1;
    
    h[n]=1;
    for(int i=n-1;i>=1;i--)
        if(a[i]<a[i+1])h[i]=h[i+1]+1;
        else h[i]=1;

    //ans1计算的是不删元素时的最大长度
    int ans1=-2e9;
    for(int i=1;i<=n;i++)ans1=max(ans1,q[i]);

    //ans2计算的是删元素时的最大长度
    int ans2=-2e9;
    for(int i=2;i<=n-1;i++)
        if(a[i-1]<a[i+1])
            ans2=max(ans2,q[i-1]+h[i+1]);

    cout<<max(ans1,ans2)<<endl;

    return 0;
}