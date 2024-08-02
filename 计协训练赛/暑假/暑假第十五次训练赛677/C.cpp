#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
int a[300010];

void solve()
{
    cin>>n;
    int maxv=-1e18;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]),maxv=max(maxv,a[i]);
    bool sign=true;
    for(int i=2;i<=n;i++)
        if(a[i]!=a[1])
            sign=false;
    if(sign)
    {
        cout<<-1<<endl;
        return;
    }
    for(int i=1;i<=n;i++)
        if(a[i]==maxv)
            if((i-1>=1&&a[i-1]<a[i]) || (i+1<=n&&a[i+1]<a[i]))
            {
                cout<<i<<endl;
                return;
            }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}
