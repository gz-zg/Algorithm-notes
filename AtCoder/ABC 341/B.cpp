#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

LL a[N];

int main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    for(int i=1;i<=n-1;i++)
    {
        int S,T; scanf("%d%d",&S,&T);
        a[i+1]+=a[i]/S*T;
    }
    cout<<a[n];

    return 0;
}