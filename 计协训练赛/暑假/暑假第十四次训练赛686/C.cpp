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
    map<int,int>mp;
    for(int i=1;i<=n;i++)mp[a[i]]=1;
    for(int i=1;i<=n;i++)
    {
        int j=i;
        while(j+1<=n && a[j+1]==a[j])j++;
        if(i!=1 && j!=n)mp[a[i]]++;
        i=j;
    }
    int sign=true;
    for(int i=1;i<=n;i++)
        if(a[i]!=a[1])
            sign=false;
    if(sign)
    {
        cout<<0<<endl;
        return;
    }
    int minv=1e18;
    for(auto i:mp)minv=min(minv,i.second);
    cout<<minv<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}