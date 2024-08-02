#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int l,r;
int a[10]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};

void solve()
{
    cin>>l>>r;
    int ans1=0,ans2=0;
    for(int i=0;i<=9;i++)ans1+=l/a[i];
    for(int i=0;i<=9;i++)ans2+=r/a[i];
    cout<<ans2-ans1<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}