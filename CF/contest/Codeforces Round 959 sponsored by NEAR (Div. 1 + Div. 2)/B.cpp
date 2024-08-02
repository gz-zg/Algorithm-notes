#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    string s,t; cin>>s>>t;
    for(int i=0;i<s.size()&&s[i]=='0';i++)
        if(t[i]=='1')
        {
            cout<<"NO"<<endl;
            return;
        }
    cout<<"YES"<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}