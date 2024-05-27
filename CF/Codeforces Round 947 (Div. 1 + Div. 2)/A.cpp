#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[55];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    int ans=1;
    for(int i=1;i<=n-1;i++)
        if(a[i]>a[i+1])
            ans++;
    if(ans==1)cout<<"Yes"<<endl;
    else if(ans==2 && a[n]<=a[1])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}