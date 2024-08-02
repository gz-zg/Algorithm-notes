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
    for(int i=1;i<=n;i++)cin>>a[i];
    int ans=0;
    vector<pair<pair<int,int>,int>>res;
    for(int i=1;i<=n;i++)
    {
        int idx=-1;int minv=2e9;
        for(int j=i;j<=n;j++)
        {
            if(a[j]<minv)
            {
                idx=j;
                minv=a[j];
            }
        }
        if(i==idx)continue;
        ans++;
        int t=a[idx];
        for(int k=idx-1;k>=i;k--)
        {
            a[k+1]=a[k];
        }
        a[i]=t;
        res.push_back({{i,idx},idx-i});
    }
  
    cout<<ans<<endl;
    for(auto i:res)
    {
        cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<endl;
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}