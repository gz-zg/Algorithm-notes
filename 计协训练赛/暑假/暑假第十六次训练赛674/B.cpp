#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,m;

void solve()
{
    cin>>n>>m;
    vector<int>res;
    bool sign=false;
    for(int i=1;i<=4*n;i++)
    {
        int x; scanf("%lld",&x);
        res.push_back(x);
        if(i%4==0)
        {
            if(res[1]==res[2])sign=true;
            res.clear();
        }
    }
    if(sign && m%2==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}