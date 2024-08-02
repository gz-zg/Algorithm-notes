#include <bits/stdc++.h>
#define int long long
using namespace std;
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
    
    bool sign=false;
    for(auto i:mp)
        if(i.second%2==1)
            sign=true;
    if(sign)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}