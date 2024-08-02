#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
int a[110];

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    int m1=-1e8;
    for(int i=1;i<=n;i++)
        if(i%2==1)
            m1=max(m1,a[i]);
    cout<<m1<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}