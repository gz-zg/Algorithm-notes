#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n,k; cin>>n>>k;
    int a=4*(n+1-k);
    a=(a+2)/3;
    int b=4*k;

    int mb=b*2+a*4;
    int mg=a*2+b*4;
    mb+=(mg+3)/4*2;
    cout<<(mb+3)/4<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}