#include<bits/stdc++.h>
#define int long long
using namespace std;

int n;
int h[200010];
int cnt[200010];

signed main()
{   
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&h[i]);
    
    int maxci=-1;
    for(int i=1;i<=n;i++)
    {
        int v = h[i];
        while(v-1)
        {
            cnt[i]++;
            v=sqrtl(v/2+1);
        }
        maxci=max(maxci,cnt[i]);
    }

    int ans=0;
    for(int i=maxci;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
            if(cnt[j]==i)
            {
                if(h[j]!=h[j+1])ans++;
                cnt[j]--;
                h[j]=sqrtl(h[j]/2+1);
            }
    }
    cout<<ans<<endl;

    return 0;
}