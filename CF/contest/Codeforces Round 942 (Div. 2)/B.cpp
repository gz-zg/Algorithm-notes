//贪心：因为每次去除一个U硬币后，U硬币数量的奇偶绝对会改变
//因此对于同一个人来说，每次轮到他时U硬币的奇偶一直是一样的
//而只有当轮到某个人时U硬币的数量为0（即为偶数）时，这个人才会输掉游戏
//即表示如果Alice开始时U硬币数量为偶数，她必输；否则，她必赢；
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    
    int u=0;
    for(char i:s)
        if(i=='U')
            u++;

    if(u%2==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}