#include <bits/stdc++.h>
using namespace std;

int n;
int a[6010];
int l[3010],r[3010],len[3010];
int f[3010],dp[6010];

bool cmp(int x,int y){return (r[x]-l[x])<(r[y]-l[y]);}

int doit(int x,int y,int v)
{
    memset(dp,0,sizeof dp);
    for(int i=x;i<=y;i++)
    {
        dp[i]=dp[i-1]+v;
        if(l[a[i]]!=i && l[a[i]]>x)dp[i]=max(dp[i],dp[l[a[i]]-1]+f[a[i]]);
    }
    return dp[y];
}

signed main()
{
    cin>>n;
    for(int i=1;i<=2*n;i++)cin>>a[i];
    for(int i=1;i<=2*n;i++)r[a[i]]=i;
    for(int i=2*n;i>=1;i--)l[a[i]]=i;
    for(int i=1;i<=n;i++)len[i]=i;
    sort(len+1,len+1+n,cmp);
    for(int i=1;i<=n;i++)f[len[i]]=doit(l[len[i]],r[len[i]],len[i]);
    cout<<doit(0,2*n+1,0)<<endl;

    return 0;
}