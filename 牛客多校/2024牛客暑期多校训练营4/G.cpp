#include <bits/stdc++.h>
#define int long double
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
    int ans=sqrtl((-x1-x2)*(-x1-x2)+(y1-y2)*(y1-y2));
    ans=min(ans,sqrtl((x1-x2)*(x1-x2)+(y1+y2)*(y1+y2)));
    printf("%.10Lf\n",ans);
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}