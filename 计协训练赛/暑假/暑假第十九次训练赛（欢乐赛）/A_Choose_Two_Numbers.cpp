#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,m;
int a[110],b[110];

void solve()
{
    map<int,int>mp;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],mp[a[i]]++;
    cin>>m;
    for(int i=1;i<=m;i++)cin>>b[i],mp[b[i]]++;
    
    
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            if(mp[a[i]+b[j]]==0)
            {
                cout<<a[i]<<" "<<b[j]<<endl;
                return;
            }
        }
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;
    while(t--)solve();
    return 0;
}