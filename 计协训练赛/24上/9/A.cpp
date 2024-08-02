#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    LL a,b; cin>>a>>b;
    if(a==0)
    {
        cout<<1<<endl;
        return;
    }
    else
    {
        cout<<a+b*2+1<<endl;
        return;
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