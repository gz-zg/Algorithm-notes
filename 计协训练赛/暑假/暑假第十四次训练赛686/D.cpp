#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;

void solve()
{
    cin>>n;
    int nn=n;
    map<int,int>mp;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            n/=i;
            mp[i]++;
        }
    }
    if(n>1)mp[n]++;
    
    int maxv=-1e18,f;
    for(auto i:mp)
        if(i.second>maxv)
        {
            maxv=i.second;
            f=i.first;
        }
    cout<<maxv<<endl;
    for(int i=1;i<=maxv-1;i++)
    {
        cout<<f<<" ";
        nn/=f;
    }
    cout<<nn<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}