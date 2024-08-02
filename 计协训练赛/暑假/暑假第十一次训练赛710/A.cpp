#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m,x; 

void solve()
{
    cin>>n>>m>>x;
    x--;
    int l=x/n, h=x%n;
    cout<<h*m+l+1<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}