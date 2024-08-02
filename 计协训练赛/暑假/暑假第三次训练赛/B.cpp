#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[110];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=2*n;i++)cin>>a[i];
    map<int,int>mp;
    for(int i=1;i<=2*n;i++)
    {
        mp[a[i]]++;
        if(mp[a[i]]==1)cout<<a[i]<<" ";
    }
    cout<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}