#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[55];

void solve()
{
    int n; cin>>n;
    int max=0;
    int min=2e9;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>max)max=a[i];
        if(a[i]<min)min=a[i];
    }
    cout<<max-min<<endl;
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