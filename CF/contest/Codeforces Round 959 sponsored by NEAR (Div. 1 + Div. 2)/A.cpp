#include <bits/stdc++.h>
using namespace std;

int a[20][20];

void solve()
{
    int n,m; cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[(i+1)%n][(j+1)%m];
    if(n==1 && m==1)cout<<-1<<endl;
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}