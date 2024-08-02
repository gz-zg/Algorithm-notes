#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int N = 100010;

int n,m;
int a[200010];
int b[200010];

void solve()
{
    cin>>n>>m;
    int sum=0;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]),sum+=a[i];
    for(int i=1;i<=n;i++)scanf("%lld",&b[i]);

    if(sum<m)cout<<-1<<endl;
    else
    {
        vector<pair<int,int>>res;
        for(int i=1;i<=n;i++)res.push_back({b[i],a[i]});
        sort(res.begin(),res.end());
        for(int i=0;i<=n-1;i++)
        {

        }
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}