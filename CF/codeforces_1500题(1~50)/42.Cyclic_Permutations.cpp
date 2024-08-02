//思维题
/*
解题思路:
我们可以模拟最简单的情况(n=3), 我们发现只有213和312两种情况.
我们发现如果要成环. 应该至少存在一个三元组a, b, c. 满足a>b && b<c. (对于多元组, 也一定会包含三元组, 所以考虑三元组的情况即可.) 
如果我们正向去想, 会发现情况很复杂, 甚至还需要考虑去重. 
但是如果我们反向去想, 对于n个数字, 全排列的种类有n!种, 而对于不符合的情况, 我们用n!减去即可得到答案. 
而不符合的情况, 则是对于任意一个三元组a, b, c, 都有a<b || c<b. 
我们不妨从大到小放置这n个数, 组成不能成环的情况. 
假设n已经被放置在某个位置, 则n-1位于其左侧或者右侧均可以, 
n-2也是位于左右放置都可以, 我们只要保证放置的顺序不改变(大到小), 
且每次放置的位置都挨着之前放置的数字, 这样每当我们放置一个数字x, 
与他相邻的(比他先放置的)那个数字一定会大于它. 现在我们就得到了不符合条件的数量是2n-1.
因此得到答案: n! - 2^(n-1).
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1e9 + 7;

int n;

signed main()
{
    cin>>n;
    int t=1;
    for(int i=1;i<=n;i++)t=t*i%mod;
    int k=1;
    for(int i=1;i<=n-1;i++)k=k*2%mod;
    cout<<((t-k)%mod+mod)%mod<<endl;

    return 0;
}