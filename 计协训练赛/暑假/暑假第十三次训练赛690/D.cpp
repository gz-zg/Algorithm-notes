#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
int a[3010];

int check(int x)
{
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int j=i-1;
        int sum=0;
        while(j+1<=n && sum<x)j++,sum+=a[j];
        if(sum==x)ans+=j-i,i=j;
        else return -1;
    }
    return ans;
}

void solve()
{
    cin>>n;
    int maxv=-1e18;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        maxv=max(maxv,a[i]);
        sum+=a[i];
    }

    for(int i=n;i>=1;i--)
    {
        if(sum%i==0)
            if(check(sum/i)!=-1)
            {
                cout<<check(sum/i)<<endl;
                return;
            }
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}