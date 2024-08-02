#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

//等下最好全枚举吧->其实根本不用枚举->答案可以直接是x-1
//因为当y=x-1时 目标值就已经最大了

//gcd(x,y)+y=gcd(x−y,y)+y
//gcd(x,y)+y≤x

void solve()
{
    int x; cin>>x;
    cout<<x-1<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}