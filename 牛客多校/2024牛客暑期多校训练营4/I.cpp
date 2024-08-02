#include <bits/stdc++.h>
using namespace std;

int n,m; 

signed main()
{
    cin>>n>>m;
    vector<map<int,int>>mp(n+10);
    for(int i=1;i<=m;i++)
    {
        int u,v; scanf("%d %d",&u,&v);
        mp[u][v]=1;
        mp[v][u]=1;
    }
    for(int i=1;i<=n;i++)mp[i][i]=1;

    int ans=0;
    for(int i=1,j=1;i<=n;i++)
    {   
        for(int k=i;k>=j;k--)
            if(mp[i][k]==0)
            {
                j=k+1;
                break;
            }
        ans+=i-j+1;
    }
    cout<<ans<<endl;
 
    return 0;
}