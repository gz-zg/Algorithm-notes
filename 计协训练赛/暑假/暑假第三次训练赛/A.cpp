#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    if (a[2] != a[1]) cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        cout << a[2] << " " << a[0] << " " << a[0] << endl;
    }   
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}