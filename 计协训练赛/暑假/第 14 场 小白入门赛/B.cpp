#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

signed main()
{
    long double n; cin>>n;
    long double ans=-1,v=100;
    for(int i=1;i<=n;i++)
    {
        long double a,b; scanf("%Lf %Lf",&a,&b);
        if(b/a<v)v=b/a,ans=i;
    }
    cout<<ans<<endl;
    return 0;
}