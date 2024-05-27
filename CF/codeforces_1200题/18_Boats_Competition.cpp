#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n; cin>>n;
    int cnt[110]={0};
    for(int i=1;i<=n;i++)
    {
        int t; scanf("%d",&t);
        cnt[t]++;
    }

    int ans=-2e9;
    for(int i=2;i<=2*n;i++)
    {
        int res=0;
        for(int j=1;j<=i-1;j++)
            if(j==i-j)res+=cnt[j]/2*2;      //这样就能确保res绝对是其真实值的两倍
            else res+=min(cnt[j],cnt[i-j]);
        ans=max(ans,res/2);
    }

    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}