#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[55];

void solve()
{
    int n; cin>>n;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        mp[a[i]]--;
        while(a[i]>n)a[i]/=2;
        while(a[i]>0 && mp[a[i]]>=1)a[i]/=2;
        mp[a[i]]++;
    }
    for(int i=1;i<=n;i++)
        if(mp[i]==0)
        {
            cout<<"NO"<<endl;
            return;
        }
    cout<<"YES"<<endl;
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