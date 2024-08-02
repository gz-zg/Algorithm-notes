#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,m;
int a[110];

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    cin>>m;
    while(m--)
    {
        int x,y; cin>>x>>y;
        a[x-1]+=y-1;
        a[x+1]+=a[x]-y;
        a[x]=0;
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;
    while(t--)solve();
    return 0;
}