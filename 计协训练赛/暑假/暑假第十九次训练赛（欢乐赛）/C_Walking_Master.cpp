#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a,b,c,d;

void solve()
{
    cin>>a>>b>>c>>d;
    if(b>d)
    {
        cout<<-1<<endl;
        return;
    }
    int w=c-a,h=d-b;
    if(w>h)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<h-w+h<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}