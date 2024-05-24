#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

int a[N];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    sort(a+1,a+1+n);

    if(n==1)
    {
        if(a[1]>=2)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    else
    {
        if(a[n]-a[n-1]>=2)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
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