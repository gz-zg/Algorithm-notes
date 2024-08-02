#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
int a[100010];

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    sort(a+1,a+1+n);
    vector<int>res;
    for(int i=2;i<=n;i++)
        if(a[i]!=a[i-1])
            res.push_back(a[i]-a[i-1]);
    int G=0;
    for(int i:res)G=gcd(G,i);
    cout<<G<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}