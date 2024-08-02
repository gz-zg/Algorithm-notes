#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

LL a[35];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    int ans=0;
    for(int i=n-1;i>=1;i--)
    {
        while(a[i]>=a[i+1])
        {
            a[i]/=2;
            ans++;
            if(a[i]==0 && i!=1)
            {
                cout<<-1<<endl;
                return;
            }
            if(a[i]==0 && i==1 && a[2]==0)
            {
                cout<<-1<<endl;
                return;
            }
        }
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