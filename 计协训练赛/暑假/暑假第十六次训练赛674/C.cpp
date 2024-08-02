/*
首先可以证明:对于一种操作序列a,他包含x次操作1,y次操作2,那么一定是先+1+1+1然后copycopycopy
这样的操作顺序最优
因此当固定操作1的次数时,sum超过n还需要的最少操作2的次数就可以直接求出来
所以可以枚举操作1的次数，对每次的ans取min

其实O(1)也可以做
因为当n是某个数x的平方时，一定是先加到x，然后对x进行copy所对应的操作次数最少
而对于那些不是某个数的平方的n时，枚举sqrt(n)周围的一些数作为x进行计算，统计最小的ans
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;

void solve()
{
    cin>>n;
    int k=sqrt(n);
    int ans=1e18;
    for(int i=max(1LL,k-100);i<=k+100;i++)ans=min(ans,i-1+(n+i-1)/i-1);  
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}