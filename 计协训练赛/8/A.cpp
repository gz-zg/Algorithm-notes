#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    double x,y; cin>>x>>y;
    
    if( (y/x)!=int(y/x) )
    {
        cout<<0<<" "<<0<<endl;
    }
    else 
    {
        int t=y/x; map<int,int>mp;

        if(t==1)
        {
            cout<<1<<" "<<1<<endl; 
            return;
        }
        
        int backup=t;
        for(int i=2;i<=100;i++)
        {
            while(t%i==0)
            {
                mp[i]++;
                t/=i;
            }
        }
        if(t>1)mp[t]++;
        if(mp.size()==1)cout<<mp.begin()->second<<" "<<mp.begin()->first<<endl;
        else cout<<1<<" "<<backup<<endl;
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