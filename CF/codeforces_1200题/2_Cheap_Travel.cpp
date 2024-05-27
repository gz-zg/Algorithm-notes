//没有强制要求要购买n张票，也可以购买n张以上的票
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int main()
{
    int n,m,a,b; cin>>n>>m>>a>>b;
    int x=n/m, y=n%m;
    if(b<m*a)cout<<x*b+min(y*a,b);
    else cout<<x*m*a+min(y*a,b);

    return 0;
}