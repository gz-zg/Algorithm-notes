#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    string a,b; cin>>a>>b;
    int cnt=0;
    for(char i:b)
        if(i=='a')
            cnt++;
    if(a.size()==1)
    {
        if(b.size()==1)
        {
            if(b[0]=='a')cout<<1<<endl;
            else cout<<2<<endl;
        }
        else
        {
            if(cnt==0)cout<<2<<endl;
            else cout<<-1<<endl;
        }
    }
    else
    {
        if(b.size()==1)
        {
            if(b[0]=='a')cout<<1<<endl;
            else
            {
                LL ans=1;
                for(int i=1;i<=a.size();i++)ans*=2;
                cout<<ans<<endl;
            }
        }
        else
        {
            if(cnt==0)
            {
                LL ans=1;
                for(int i=1;i<=a.size();i++)ans*=2;
                cout<<ans<<endl;
            }
            else cout<<-1<<endl;
        }
    }
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