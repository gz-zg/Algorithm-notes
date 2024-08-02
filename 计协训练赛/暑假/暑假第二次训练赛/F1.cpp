#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n; cin>>n;
    string s; cin>>s; s='@'+s;
    
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        string k;
        int nadd=0,nsub=0,subs=0;
        bool st[3010]={false};
        for(int j=i;j<=n;j++)
        {
            if(s[j]=='+')nadd++;
            else nsub++;
            if(s[j]=='-'&&(j-1>=i&&s[j-1]=='-'&&st[j-1]==false))
            {
                subs++;
                st[j-1]=st[j]=true;
            }
            if(nadd<=nsub && (nsub-nadd)%3==0 && subs>=(nsub-nadd)/3)ans++;
        }
    }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}