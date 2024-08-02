#include <bits/stdc++.h>
#define int long long
using namespace std;

int v[1010],a[1010],b[1010];
int f[1010][1010];

signed main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)cin>>v[i];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];

    for(int i=0;i<=1009;i++)
        for(int j=0;j<=1009;j++)
            f[i][j]=1e18;
    f[1][v[1]]=0;
    for(int i=1;i<=n-1;i++)
        for(int j=0;j<=1000;j++)
            if(f[i][j]!=1e18)
            {
                if(j+b[i]>=v[i+1])f[i+1][min(j+b[i],1000ll)]=min(f[i+1][min(j+b[i],1000ll)],f[i][j]+a[i]);
                if(j>=v[i+1])f[i+1][j]=min(f[i+1][j],f[i][j]);
            }
    
    int ans=1e18;
    for(int i=0;i<=1000;i++)ans=min(ans,f[n][i]);
    if(ans!=1e18)cout<<ans<<endl;
    else cout<<-1<<endl;

    return 0;
}