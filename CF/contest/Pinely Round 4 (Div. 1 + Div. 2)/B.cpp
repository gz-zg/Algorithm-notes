#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
int b[100010];

void solve()
{
    cin>>n;
    for(int i=1;i<=n-1;i++)scanf("%lld",&b[i]);
    vector<int>a(n+10);
    a[1]=b[1];
    for(int i=2;i<=n-1;i++)a[i]=b[i]|b[i-1];
    a[n]=b[n-1];
    bool sign=true;
    for(int i=1;i<=n-1;i++)
        if((a[i]&a[i+1])!=b[i])
        {
            sign=false;
            break;
        }
    if(sign)
    {
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