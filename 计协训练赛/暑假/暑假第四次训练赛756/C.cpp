#include <bits/stdc++.h>
using namespace std;

int a[200010];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    if(a[1]==n || a[n]==n)
    {
        reverse(a+1,a+1+n);
        for(int i=1;i<=n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
    else cout<<-1<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}