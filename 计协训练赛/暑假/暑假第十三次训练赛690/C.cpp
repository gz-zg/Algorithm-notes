#include <bits/stdc++.h>
#define int long long
using namespace std;

int x;

void solve()
{
    cin>>x;
    if(x<=9)cout<<x<<endl;
    else if(x>=46)cout<<-1<<endl;
    else
    {
        string ans;
        for(int i=9;i>=1;i--)
        {
            if(x>=i)
            {
                x-=i;
                char c = i+'0';
                ans=c+ans;
            }
        }
        cout<<ans<<endl;
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}