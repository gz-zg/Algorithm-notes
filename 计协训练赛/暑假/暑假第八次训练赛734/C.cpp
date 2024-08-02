#include <bits/stdc++.h>
using namespace std;
const int N = 300010;

int a[N];

void solve()
{
    int n,q; cin>>n>>q;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(mp[a[i]]==0)mp[a[i]]=i;
    }
    
    while(q--)
    {
        int t; scanf("%d",&t);
        printf("%d ",mp[t]);
        for(auto &i:mp)
            if(i.first!=t)
                if(i.second<mp[t])
                    i.second++;
        mp[t]=1;
    }
}

signed main()
{
    solve();
    return 0;
}