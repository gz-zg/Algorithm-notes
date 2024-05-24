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

    if(n<=2)cout<<"YES"<<endl;
    else
    {
        for(int i=n;i>=3;i-=2)
        {
            int nei,wai;
            if(i-1>=1)wai=min(a[i],a[i-1]);
            if(i-3>=1)nei=max(a[i-2],a[i-3]);
            else nei=a[i-2];
            if(nei>wai)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
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