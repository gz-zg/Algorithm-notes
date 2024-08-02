#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[15]={0,1,11,111,1111,11111,111111,1111111,11111111,111111111,1111111111};

void solve()
{
    int n; cin>>n;
    int len=to_string(n).size();
    cout<<(len-1)*9+n/a[len]<<endl;   
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}