#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 998244353; 

int n;
int a[110];

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    
    while(1) 
    {
      bool upd = false;
      for(int i=1;i<=n-1;i++) 
      {
        while(a[i]<a[i + 1]) 
        {
          upd = true;
          a[i]++;
          a[i+1]--;
        }
      }
      if (!upd) break;
    }

    int ans = 1;
    for (int i = 1; i <= n; ++i)ans = ans * a[i] % mod;
    for (int i = 1; i <= n; ++i)cout<<a[i]<<" ";
    cout<<endl;
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}