#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int x[520];

void solve()
{
    int n; cin>>n;
    for(int i=2;i<=n;i++)scanf("%d",&x[i]);

    printf("%d ",501);
    LL ans=501;
    for(int i=2;i<=n;i++)
    {
        ans+=x[i];
        printf("%d ",ans);
    }
    cout<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}