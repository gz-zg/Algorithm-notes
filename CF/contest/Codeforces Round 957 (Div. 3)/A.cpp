#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int a,b,c; cin>>a>>b>>c;
    int ans=-2e9;
    for(int i=0;i<=5;i++)
        for(int j=0;j<=5;j++)
            for(int k=0;k<=5;k++)
                if(i+j+k==5)
                    if((a+i)*(b+j)*(c+k)>ans)
                        ans=(a+i)*(b+j)*(c+k);
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}