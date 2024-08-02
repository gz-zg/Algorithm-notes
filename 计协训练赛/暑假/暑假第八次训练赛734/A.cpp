#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n; cin>>n;
    int n1=0,n2=0,n3=0;
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        if(x==1)n1++;
        else if(x==2)n2++;
        else n3++;
    }
    if(n1>=1)cout<<n1+n3<<endl;
    else cout<<n3<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}