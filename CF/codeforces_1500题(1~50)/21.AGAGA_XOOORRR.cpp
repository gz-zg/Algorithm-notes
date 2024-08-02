#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[2010];

void solve()
{       
    int n; cin>>n;
    int x=0;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]),x^=a[i];
    if(x==0)cout<<"YES"<<endl;
    else
    {
        int num=0;
        int t=0;
        for(int i=1;i<=n;i++)
        {
            t^=a[i];
            if(t==x)num++,t=0;
        }
        if(t==0 && num>=2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}