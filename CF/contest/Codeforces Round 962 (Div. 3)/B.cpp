#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,k;
char g[1010][1010];

void solve()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>g[i]+1;
    for(int i=1;i<=n;i+=k)
    {
        for(int j=1;j<=n;j+=k)printf("%c",g[i][j]);
        printf("\n");
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}