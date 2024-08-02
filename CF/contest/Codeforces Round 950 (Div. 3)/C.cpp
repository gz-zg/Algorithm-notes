#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

int a[N],b[N],d[N];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    for(int i=1;i<=n;i++)scanf("%lld",&b[i]);
    
    map<int,int>mp;
    int m; cin>>m;
    for(int i=1;i<=m;i++)scanf("%lld",&d[i]),mp[d[i]]++;

    for(int i=1;i<=n;i++)
        if(a[i]!=b[i])
        {
            if(mp[b[i]]>=1)mp[b[i]]--;
            else
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    for(int i=1;i<=n;i++)
        if(d[m]==b[i])
        {
            cout<<"YES"<<endl;
            return;
        }
    cout<<"NO"<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}