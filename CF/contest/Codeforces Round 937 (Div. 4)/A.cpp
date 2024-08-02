#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int a,b,c; cin>>a>>b>>c;
    if(a<b && b<c){cout<<"STAIR"<<endl;return;}
    if(a<b && b>c){cout<<"PEAK"<<endl;return;}
    cout<<"NONE"<<endl;
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