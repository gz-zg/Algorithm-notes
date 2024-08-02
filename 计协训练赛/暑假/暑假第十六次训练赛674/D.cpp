//???
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
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    int ans=0;
    map<int,bool>mp; mp[0]=true;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=a[i];
        if(mp[sum])
        {
            ans++;
            mp.clear();
            mp[0]=true;
            sum=a[i];
            mp[sum]=true;
        }
        else mp[sum]=true;
    }
    cout<<ans<<endl;
}

signed main()
{
    int t=1;
    while(t--)solve();
    return 0;
}