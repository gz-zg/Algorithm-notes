//既要周期为k,又要整体对称——>每个周期是对称的
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k; cin>>n>>k;
    string s; cin>>s; s='@'+s;

    int ans=0;
    for(int i=1;i<=(k+1)/2;i++)
    {
        int l=i,r=k+1-i;
        int cnt[27]={0};
        if(l!=r)
        {
            for(int j=l;j<=n;j+=k)cnt[s[j]-'a'+1]++;
            for(int j=r;j<=n;j+=k)cnt[s[j]-'a'+1]++;
            sort(cnt+1,cnt+1+26,greater<int>());
            ans+=n/k*2-cnt[1];
        }
        else
        {
            for(int j=l;j<=n;j+=k)cnt[s[j]-'a'+1]++;
            sort(cnt+1,cnt+1+26,greater<int>());
            ans+=n/k-cnt[1];
        }
    }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}