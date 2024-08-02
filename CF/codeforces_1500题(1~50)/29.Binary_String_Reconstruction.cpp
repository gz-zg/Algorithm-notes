#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n0,n1,n2; cin>>n0>>n1>>n2;
    
    if(n1==0)  //当没有《01》和《10》时，0与1不会同时存在
    {
        if(n0!=0)  //此时字符串中只存在0
        {
            string ans(n0+1,'0');
            cout<<ans<<endl;
        }
        else  //此时字符串中只存在1
        {
            string ans(n2+1,'1');
            cout<<ans<<endl;
        }
    }
    else
    {
        string ans="1";
        int k=0;
        for(int i=1;i<=n1;i++)ans+=k+'0',k^=1;
        ans.insert(1,string(n0,'0'));
        ans.insert(0,string(n2,'1'));
        cout<<ans<<endl;
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}