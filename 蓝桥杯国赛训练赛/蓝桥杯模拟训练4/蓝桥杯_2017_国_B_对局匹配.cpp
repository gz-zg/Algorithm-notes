//稍微变形的状态机模型(DP)
#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,k;
int cnt[100010];
int f[100010];

signed main()
{
    cin>>n>>k;
    int tmp;
    for(int i=1;i<=n;i++)scanf("%lld",&tmp),cnt[tmp]++;

    if(k==0)
    {
        int ans=0;
        for(int i=0;i<=100000;i++)
            if(cnt[i]>=1)ans++;
        cout<<ans<<endl;
        return 0;
    }

    for(int i=0;i<k;i++)
        for(int j=i;j<=100000;j+=k)
        {
            if(j/k+1==1)f[j]=cnt[j];  
            else if(j/k+1==2)f[j]=max(cnt[j],cnt[j-k]);
            else f[j]=max(f[j-k],f[j-2*k]+cnt[j]);
        }
    int ans=0;    
    for(int i=100000-k+1;i<=100000;i++)ans+=f[i];
    cout<<ans<<endl;

    return 0;
}
