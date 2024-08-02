#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

pair<int,int>g[N];

signed main()
{
    int n,d; cin>>n>>d;
    for(int i=1;i<=n;i++)scanf("%lld %lld",&g[i].first,&g[i].second);
    sort(g+1,g+1+n);
    
    //双指针
    int ans=-2e9;
    int sum=0;
    for(int l=1,r=1;r<=n;r++)
    {
        sum+=g[r].second;
        while(g[r].first-g[l].first>=d)
        {
            sum-=g[l].second;
            l++;
        }
        ans=max(ans,sum);
    }
    cout<<ans<<endl;

    return 0;
}