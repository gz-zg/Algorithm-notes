#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,q;
string a,b;

void solve()
{
    cin>>n>>q;
    cin>>a>>b; a='@'+a; b='@'+b;

    vector<vector<int>>s1(n+10,vector<int>(26,0));
    vector<vector<int>>s2(n+10,vector<int>(26,0));
    for(int i=1;i<=n;i++)
    {
        s1[i]=s1[i-1];
        s1[i][a[i]-'a']++;
        s2[i]=s2[i-1];
        s2[i][b[i]-'a']++;
    }
        
    while(q--)
    {
        int l,r; scanf("%lld %lld",&l,&r);
        int cnt=0;
        for(int i=0;i<=25;i++)cnt+=min(s1[r][i]-s1[l-1][i],s2[r][i]-s2[l-1][i]);
        printf("%lld\n",r-l+1-cnt);
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}