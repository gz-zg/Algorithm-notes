#include <bits/stdc++.h>
using namespace std;

char g[30][30];

void solve()
{
    int n,m,k; cin>>n>>m>>k;
    for(int i=1;i<=n;i++)cin>>g[i]+1;
    vector<vector<int>>st(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(g[i][j]=='*')
                st[i][j]=1;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(st[i][j]==1)
            {
                int len=0;
                while(i-len>=1 && j-len>=1 && j+len<=m)
                {
                    if(st[i-len][j-len]==0 || st[i-len][j+len]==0)break;
                    len++;
                }
                if(len-1>=k)
                {
                    for(int k=0;k<=len-1;k++)
                        st[i-k][j-k]=st[i-k][j+k]=2;
                }
            }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(st[i][j]==1)
            {
                cout<<"NO"<<endl;
                return;
            }
    cout<<"YES"<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}