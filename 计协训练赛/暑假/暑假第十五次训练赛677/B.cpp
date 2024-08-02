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
    for(int i=1;i<=n;i++)cin>>a[i];
    int ans=0;
    vector<int>res;
    for(int i=1;i<=n;i++)
        if(a[i]==1)
            res.push_back(i);
    for(int i=1;i<res.size();i++)ans+=res[i]-res[i-1]-1;
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}
