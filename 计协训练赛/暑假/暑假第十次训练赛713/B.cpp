#include <bits/stdc++.h>
using namespace std;

int n;
char g[410][410];

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>g[i]+1;
    int x1=0,y1=0,x2=0,y2=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(g[i][j]=='*')
                if(x1==0)x1=i,y1=j;
                else x2=i,y2=j;
    if(x1==x2)
    {
        if(x1==1)g[x1+1][y1]=g[x2+1][y2]='*';
        else g[1][y1]=g[1][y2]='*';
    }
    else if(y1==y2)
    {
        if(y1==1)g[x1][y1+1]=g[x2][y2+1]='*';
        else g[x1][1]=g[x2][1]='*';
    }
    else g[x1][y2]=g[x2][y1]='*';
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)cout<<g[i][j];
        cout<<endl;
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}