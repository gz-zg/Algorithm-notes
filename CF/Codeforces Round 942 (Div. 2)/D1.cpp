#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n,m; cin>>n>>m;
    
    LL ans=0;
    for(LL i=1;i<=m;i++)
    {
        if(i==1)ans+=n;  //b==1时需要特判，否则ans会多1
        else
        {
            LL b2=i*i;
            ans+=(n+i)/b2;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}