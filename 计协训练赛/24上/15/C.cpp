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
    
    if(a[1]!=n && a[n]!=n)cout<<-1<<endl;
    else
    {
        if(a[1]==n)
        {
            cout<<n<<" ";
            for(int i=n;i>=2;i--)cout<<a[i]<<" ";
            cout<<endl;
            return;
        }

        if(a[n]==n)
        {
            cout<<n<<" ";
            for(int i=n-1;i>=1;i--)cout<<a[i]<<" ";
            cout<<endl;
            return;
        }
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