#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

pair<int,pair<int,int>>a[N];

void solve()
{
    int n,m; cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x,w; scanf("%d%d",&x,&w);
        a[i]={w,{x,i}};
    }

    sort(a+1,a+1+m);
    LL ans=0; vector<pair<int,int>>res;
    for(int i=1;i<=2*n;i++)
    {
        ans+=a[i].first;
        res.push_back(a[i].second);
    }
    cout<<ans<<endl;
    
    sort(res.begin(),res.end());
    for(int i=0;i<=n-1;i++)
    {
        cout<<res[i].second<<" "<<res[2*n-1-i].second<<endl; 
    }
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