#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

int a[N];

void solve()
{
    int n; cin>>n; 
  
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    sort(a+1,a+1+n);

    int x,y,minc=2e9;
    for(int i=1;i<n;i++)
        if(a[i+1]-a[i]<minc)
            minc=a[i+1]-a[i],x=i,y=i+1;
    
    cout<<a[x]<<" ";
    for(int i=y+1;i<=n;i++)printf("%lld ",a[i]);
    for(int i=1;i<x;i++)printf("%lld ",a[i]);
    cout<<a[y]<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}