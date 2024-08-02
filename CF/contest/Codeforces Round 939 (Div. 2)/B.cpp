#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

void solve()
{
    int n; cin>>n;
    int ans=0;
    int a[N]={0};
    for(int i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        a[x]++;
        if(a[x]==2)ans++;
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}