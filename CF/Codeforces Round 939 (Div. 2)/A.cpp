#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[110];
int b[110];

void solve()
{
    int k,q; cin>>k>>q;
    for(int i=1;i<=k;i++)scanf("%d",&a[i]);
    for(int i=1;i<=q;i++)
    {
        scanf("%d",&b[i]);
        if(b[i]<a[1])printf("%d ",b[i]);
        else printf("%d ",a[1]-1);
    }
    cout<<endl;
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
