#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

int a[N],b[N];
map<int,int>ha,hb;

void solve()
{
    ha.clear();hb.clear();
    int n,m,k; cin>>n>>m>>k;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    for(int i=1;i<=m;i++)scanf("%d",&b[i]),hb[b[i]]++;
    int cnt=0,ans=0;
    for(int i=1;i<=n;i++)
    {
        ha[a[i]]++;
        if(ha[a[i]]<=hb[a[i]])cnt++;

        if(i>m)
        {
            ha[a[i-m]]--;
            if(ha[a[i-m]]<hb[a[i-m]])cnt--;
        }
        if(i>=m && cnt>=k)ans++;
    }
    cout<<ans<<endl;   
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