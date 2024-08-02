#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, x;

void solve()
{
    cin>>n>>x;
    int ans = 0;
    for (int a = 1; a <= min(n, x); a++)
    {
        for (int b = 1; a*b<=n && a+b<=x; b++)
        {
            int maxc = min((n - a * b) / (a + b), x - (a + b));
            ans += maxc;
        }
    }
    cout << ans << endl;   
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}