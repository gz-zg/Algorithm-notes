#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
int a[110];

void solve()
{
    cin>>n;
    int minv,maxv;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==1)minv=i;
        if(a[i]==n)maxv=i;
    }
    if(minv>maxv)swap(minv,maxv);
    cout<<min({minv+n-maxv+1,maxv,n-minv+1})<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}