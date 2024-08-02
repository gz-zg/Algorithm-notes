#include <bits/stdc++.h>
#define int long long
using namespace std;

int n; 
int a[200010];

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    
    int no1=false;
    for(int i=1;i<=n;i++)
    {
        if(a[i]>=2)no1=true;
        if(a[i]==1 && no1==true)
        {
            cout<<-1<<endl;
            return;
        }
    }

    int pos=-1;
    for(int i=1;i<=n;i++)
        if(a[i]>=2)
        {
            pos=i;
            break;
        }
    if(pos==-1)
    {
        cout<<0<<endl;
        return;
    }
    vector<int>dp(n+10,0);
    for(int i=pos+1;i<=n;i++)
    {
        if(a[i]<a[i-1])
        {
            int t=0, v=a[i];
            while(v<a[i-1])v=v*v,t++;
            dp[i]=dp[i-1]+t;
        }
        else if(a[i]==a[i-1])dp[i]=dp[i-1];
        else if(a[i]>a[i-1])
        {
            int t=0, v=a[i-1];
            while(v*v<=a[i])v=v*v,t++;
            if(dp[i-1]<=t)dp[i]=0;
            else dp[i]=dp[i-1]-t;
        }
    }
    
    int ans=0;
    for(int i=1;i<=n;i++)ans+=dp[i];
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}