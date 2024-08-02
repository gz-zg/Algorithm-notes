#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
int a[55];

void solve()
{
    cin>>n;
    map<int,int>mp;
    for(int i=1;i<=n;i++)cin>>a[i],mp[a[i]]++;
    int ans=-1e18;
    for(int i=2;i<=100;i++)
    {
        map<int,int>t=mp;
        int now=0;
        for(int j=1;j<=n;j++)
            if(t[a[j]]>=1 && t[i-a[j]]>=1)
            {
                if(a[j]!=i-a[j])
                {
                    now++;
                    t[a[j]]--;
                    t[i-a[j]]--;
                }
                else
                {
                    if(t[a[j]]>=2)
                    {
                        now++;
                        t[a[j]]-=2;
                    }
                }
            }
        ans=max(ans,now);
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