#include <bits/stdc++.h>
using namespace std;

int a[110][110];

void solve()
{
    int n; cin>>n;
    if(n==1)cout<<1<<endl;
    else if(n==2)cout<<-1<<endl;
    else
    {
        int idx=1;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                a[i][j]=idx++;
        for(int i=0;i<n;i++)
            if(i%2==1)
            {
                int k=a[0][i];
                for(int j=0;j<n-1;j++)a[j][i]=a[j+1][i];
                a[n-1][i]=k;
            }
        for(int i=0;i<n;i++)   
        {
            for(int j=0;j<n;j++)printf("%d ",a[i][j]);
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