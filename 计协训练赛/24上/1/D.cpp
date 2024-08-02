#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

LL a[N];

void solve()
{
    LL sum=0;
    int n; cin>>n;
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        while(a[i]%2==0)
        {
            a[i]/=2;
            sum++;
        }
    }

    if(sum>=n){cout<<0<<endl;return;}
    else
    {
        map<int,int>mp;
        for(int i=2;i<=n;i+=2)
        {
            int t=0;
            int j=i;
            while(j%2==0)
            {
                j/=2;
                t++;
            }
            mp[t]++;
        }
        int ans=0;
        for(auto i=mp.rbegin();i!=mp.rend();i++)
        {
            while( (i->second) != 0 )
            {
                ans++;
                (i->second)--;
                sum+=(i->first);
                if(sum>=n){cout<<ans<<endl;return;}
                if( (i->second)==0 )break;
            }
        }
    }
    cout<<-1<<endl;
    return;
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