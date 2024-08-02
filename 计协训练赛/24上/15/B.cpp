#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    LL a,b; cin>>a>>b;
    LL ans=0;
    
    if(a>=3*b || b>=3*a)ans=min(a,b);
    else ans=(a+b)/4;

    cout<<ans<<endl;
}

//这道题如果想不到上面的贪心做法的话，可以直接二分出答案，像下面这样
/*
bool check(int x) {
    int c = a - x, d = b - x;
    if (c >= 0 && d >= 0 && (c+d)/2 >= x) return 1;
    else return 0;
}

void work() {
    cin >> a >> b;
    int l = 0, r = (a+b)/4;
    while(l <= r) {
        int mid = (l+r) / 2;
        if (check(mid)) l = mid + 1;
        else r = mid - 1;
    }
    cout << l-1 << endl;
}
*/

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}