#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
int a[200010];

void solve()
{
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)cin>>a[i],sum+=a[i];
    if(sum%n!=0){cout<<-1<<endl;return;}
    else
    {
        int k=sum/n;
        int ans=0;
        for(int i=1;i<=n;i++)
            if(a[i]>k)
                ans++;
        cout<<ans<<endl;
    }
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}