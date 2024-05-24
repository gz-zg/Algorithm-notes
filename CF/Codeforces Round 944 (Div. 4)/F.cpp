//暴力枚举
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define int long long
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int ans=0;
    int r; cin>>r;
    int h=r;
    for(int x=0;x<=r;x++)  //如果h是当横坐标为x时满足条件的最大的高度的话，则(x,h+1)绝对不满足，(x+1,h+1)也绝对不满足，因此(x+1,h)如果满足的话，h绝对是横坐标为x+1时满足条件的最大的h，如果它不满足的话，也可以通过while循环去找到第一个满足条件的h
    {
        while(h*h+x*x>=(r+1)*(r+1))h--;  //如果h大了的话，就将h减到刚好满足
        int hh=h;
        while(hh>=1 && hh*hh+x*x>=r*r)ans++,hh--;
    }
    cout<<ans*4<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}