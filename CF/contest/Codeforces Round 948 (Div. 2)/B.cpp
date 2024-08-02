#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int x; cin>>x;
    int a[40]={0},pos=0;
    while(x)
    {
        a[pos++]=x%2;
        x/=2;
    }

    for(int i=1;i<=38;i++)
        if(a[i]==1 && a[i-1]==1)
        {
            a[i-1]=-1;
            a[i]=0;
            a[i+1]++;
            for(int j=i+1;j<=38;j++)
                if(a[j]==2)a[j]=0,a[j+1]++;
        }

    for(int i=38;;i--)
        if(a[i]!=0)
        {
            cout<<i+1<<endl;
            for(int j=0;j<=i;j++)cout<<a[j]<<" ";
            cout<<endl;
            break;
        }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}