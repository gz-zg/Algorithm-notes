#include <bits/stdc++.h>
using namespace std;

int a[200010];
int f[200010][2];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);

    memset(f,0x3f,sizeof f);
    f[1][1]=a[1],f[2][1]=a[1]+a[2];
    f[1][0]=0x3f3f3f3f,f[2][0]=a[1];
    for(int i=3;i<=n;i++)
    {
        f[i][1]=min(f[i-1][0]+a[i],f[i-2][0]+a[i-1]+a[i]);
        f[i][0]=min(f[i-1][1],f[i-2][1]);
    }
    cout<<min(f[n][0],f[n][1])<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}