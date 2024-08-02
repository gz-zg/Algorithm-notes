#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
int a[110];

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int j=i;
        while(j+1<=n && a[j+1]%2==a[j]%2)j++;
        ans+=j-i;
        i=j;
    }
    cout<<ans<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}