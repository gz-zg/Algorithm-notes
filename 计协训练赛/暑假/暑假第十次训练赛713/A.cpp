#include <bits/stdc++.h>
using namespace std;

int a[110];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        if(i-1>=1&&a[i-1]!=a[i]&&i+1<=n&&a[i+1]!=a[i]){cout<<i<<endl;return;}
        if(i-1>=1&&a[i-1]!=a[i]&&i-2>=1&&a[i-2]!=a[i]){cout<<i<<endl;return;}
        if(i+2<=n&&a[i+2]!=a[i]&&i+1<=n&&a[i+1]!=a[i]){cout<<i<<endl;return;}
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}