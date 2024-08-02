#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
int a[100010];
int b[100010];

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    for(int i=1;i<=n;i++)scanf("%lld",&b[i]);
    int ans=0,eq=0;
    for(int i=1;i<=n;i++)
        if(a[i]>b[i])ans++;
        else if(a[i]==b[i])eq++;
    cout<<ans+(eq+1)/2<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}