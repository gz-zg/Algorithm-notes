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
    map<int,int>mp;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]),mp[a[i]]++;
    int ans=1e18;
    for(auto i:mp)
        if(i.second==1)
            ans=min(ans,i.first);
    
    for(int i=1;i<=n;i++)
        if(a[i]==ans)
        {
            cout<<i<<endl;
            return;
        }
    cout<<-1<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}