#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n,m; cin>>n>>m;
    int nn=n;
    int n2=0,n5=0;
    while(n%2==0)n/=2,n2++;
    while(n%5==0)n/=5,n5++;
    int k=1;
    while(n2<n5 && k*2<=m)k*=2,n2++;
    while(n2>n5 && k*5<=m)k*=5,n5++;
    while(k*10<=m)k*=10;
    if(k==1)cout<<nn*m<<endl;
    else cout<<nn*k*(m/k)<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}