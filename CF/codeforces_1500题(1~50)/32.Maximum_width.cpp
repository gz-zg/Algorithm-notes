#include <bits/stdc++.h>
using namespace std;

int L[200010],R[200010];

signed main()
{
    int n,m; cin>>n>>m;
    string s,t; cin>>s>>t; s='@'+s; t='@'+t;
    
    int u=1;
    for(int i=1;i<=n;i++)
        if(s[i]==t[u])
        {
            L[u]=i;
            u++;
        }
    u=m;
    for(int i=n;i>=1;i--)
        if(s[i]==t[u])
        {
            R[u]=i;
            u--;
        }
        
    int ans=-2e9;
    for(int i=1;i<=m-1;i++)ans=max(ans,R[i+1]-L[i]);
    cout<<ans<<endl;

    return 0;
}